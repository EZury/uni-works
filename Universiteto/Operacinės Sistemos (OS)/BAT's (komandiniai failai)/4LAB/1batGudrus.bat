@echo off
title Katalogo sukurimas
:PRA
set zod=
echo Áveskite katalogo pavadinimà, kurá norëtumete sukurti.
echo Arba neveskite nieko jeigu noreite baigti programà.
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
echo Paspauskite betkoká nygtukà baigti komandos darbà.
GOTO PRAD
exit
