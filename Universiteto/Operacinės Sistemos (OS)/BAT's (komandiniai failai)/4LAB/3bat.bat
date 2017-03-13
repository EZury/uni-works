@echo off
Title Taip arba Ne
:PRA
cls
echo Ar jûs þmogus?
echo Áveskite "Taip" arba "Ne".
set /p zod=


if "%zod%"=="Taip" goto TAIP
if "%zod%"=="Ne" goto NE
goto ERR

:TAIP
cls
echo Taip!
pause>nul
goto PRA

:NE
cls
echo Ne!
pause>null
goto PRA

:ERR
cls
echo ??????????
echo Klaida. Jeigu norite baigti darbà spauskite CTRL+C.
pause>null
goto PRA