@echo off
title Katalogo sukurimas
:PRA
set zod=
echo �veskite katalogo pavadinim�, kur� nor�tumete sukurti.
echo Arba neveskite nieko jeigu noreite baigti program�.
set /p zod=

if "%zod%"=="*" goto FK
if "%zod%"=="" goto KB

:FK
cls
MD %zod%
echo Ktalogas sukurtas pavadinimu %zod%
dir
pause>null
goto PRA

:KB
cls
echo Paspauskite betkok� nygtuk� baigti komandos darb�.
GOTO PRAD
exit
