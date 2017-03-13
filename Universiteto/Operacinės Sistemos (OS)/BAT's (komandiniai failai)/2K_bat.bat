@echo off
:PRA
cls
CHOICE /c 12 /t 10 /d 1 /m "Pasirinkite: [1] Einamojo katalogo turinys [2] Katalogø medis"

IF ERRORLEVEL 2 goto KM
IF ERRORLEVEL 1 goto KT

:KM
tree
pause
goto PRA

:KT
dir
pause
goto PRA

