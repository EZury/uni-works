@echo off
:PRA
FOR %%a IN (Z:\2LAB\*.txt Z:\4LAB\*.bat) DO ECHO %%a >> %1
echo Sukurtas failas %cd%\%1%

choice /c 12 /n /m "Spauskite 1, jeigu norite iðvesti failo turiná ekrane. Spauskite 2, jeigu norite baigti darbà."

IF ERRORLEVEL 2 GOTO BAI
IF ERRORLEVEL 1 GOTO FUN

:FUN
echo.
type %1

:BAI
pause