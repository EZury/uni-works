@echo off
:PRAD
cls
echo 1. Paleidþia failà, kuris palygina 2 skaièius.
echo 2. Paleidþia failà, kuris sukuria naujà katalogà, nukopijuojà á já visus einamojo katalogo failus, parodo naujo katalogo turiná cmd lange.
echo 3. Paleidþia komandiná failà, kuris atlieka ávestø skaièiø dalyba ir iðveda rezultatà su liekana.
pause>null

cls
echo.
choice /c 123 /n /m "Pasirinkite 1, 2 arba 3: " 

IF ERRORLEVEL 3 GOTO thr
IF ERRORLEVEL 2 GOTO two
IF ERRORLEVEL 1 GOTO one

:one
cls
echo.
echo Paleista programa 1.
echo Áveskite skaièius.
echo Áveskite pirmà skaièiø
set /p pirmas=
echo Áveskite antrà skaièiø
set /p antras=
CALL Z:\trecias.bat %pirmas% %antras%
pause>null
GOTO PRAD

:two
cls
echo.
echo Paleista programa 2.
CALL Z:\4LAB\1bat.bat
COPY *.* %zod%
dir %zod%
pause>null
GOTO PRAD

:thr
cls
echo.
echo Paleista programa 3.
echo Áveskite skaièius.
echo Áveskite pirmà skaièiø
set /p pirmas=
echo Áveskite antrà skaièiø
set /p antras=
CALL Z:\5LAB\dalyba.bat %pirmas% %antras%
GOTO PRAD