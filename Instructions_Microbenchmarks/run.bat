@echo off
setlocal enabledelayedexpansion

mkdir output

for %%f in (Ovhd Add Abs Bfind Clz Cnot Copysign DFAdd DFDiv Div DivU Ex2 FastSqrt FDiv HFAdd Lg2 MAdd_cc MMad_cc MSubc Mul Mul24 Mul64Hi Popc Rcp Rem RemU Rsqrt Sad Sin Sqrt) do (
    echo "**************************************************************" >> output\%%f
    echo "Function --> " >> output\%%f
    echo %%f >> output\%%f
    echo. >> output\%%f
    call a.exe %%f >> output\%%f
    echo %%f done >> output\%%f
    echo "**************************************************************" >> output\%%f
    echo %%f done
)
echo All done