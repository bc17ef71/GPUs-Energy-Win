@echo off

rem Remove files matching a pattern
del /q a_dlink*
del /q pipeline.cpp*
del /q pipeline.cubin*
del /q pipeline.cudafe*
del /q pipeline.fatbin*
del /q pipeline.module_id
del /q pipeline.ptx
del /q *.out
del /q dryrun*
del /q *.o

rem Remove all files in the "output" directory
del /q /s output\*

rem Remove the "output" directory itself
rmdir /q /s output