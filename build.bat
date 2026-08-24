@echo off
REM Build script for MinGW GCC (Windows)

set COMPILER=gcc

%COMPILER% -std=c11 -O2 -Wall -Wextra -o hello.exe hello.c
%COMPILER% -std=c11 -O2 -Wall -Wextra -o sum.exe sum.c
%COMPILER% -std=c11 -O2 -Wall -Wextra -o factorial.exe factorial.c
%COMPILER% -std=c11 -O2 -Wall -Wextra -o sort.exe sort.c

if errorlevel 1 (
  echo Build failed.
) else (
  echo Build succeeded.
)

pause
