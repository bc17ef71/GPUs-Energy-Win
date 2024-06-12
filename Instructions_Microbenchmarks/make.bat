set CUDA_DIR=C:\Program Files\NVIDIA GPU Computing Toolkit\CUDA\v12.4

echo "Compiling Non-Optimized Version"
"%CUDA_DIR%\bin\nvcc" -L"%CUDA_DIR%\include" --keep -gencode arch=compute_50,code=sm_50 pipeline.cu  -Xptxas -O0 -L"%CUDA_DIR%\lib64\stubs" -L"%CUDA_DIR%\lib64" -lcuda -lcudart -lnvml
"%CUDA_DIR%\bin\nvcc" -L"%CUDA_DIR%\include" -dryrun -gencode arch=compute_50,code=sm_50 pipeline.cu  -Xptxas -O0 -L"%CUDA_DIR"\lib64\stubs" -L"%CUDA_DIR%\lib64" -lcuda -lcudart -lnvml --keep 1>dryrun.out 2>error.out
del pipeline.ptx
copy nonOpt_pipeline_temp.ptx pipeline.ptx


@echo off
setlocal enabledelayedexpansion
set "filename=dryrun.out"
(for /f "usebackq delims=" %%i in ("%filename%") do (
    set "line=%%i"
    echo !line:~3!
)) > "%filename%.tmp"
move /y "%filename%.tmp" "%filename%" > nul

REM Take 9 last lines

set "input_file=dryrun.out"
set "output_file=dryrun.out.temp"
set "num_lines=9"

for /f %%a in ('find /c /v "" ^< "%input_file%"') do set "total_lines=%%a"

rem TODO Consider skipping very last line
set /a start_line=total_lines-num_lines

rem Read the last 9 lines from the input file and write to the output file
(for /f "skip=%start_line% usebackq delims=" %%i in ("%input_file%") do (
    echo %%i
)) > "%output_file%"

move /y "%output_file%" "%input_file%" > nul

@echo on

move /y "dryrun.out" "dryrun.bat" > nul
./dryrun.bat