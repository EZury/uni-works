@echo off
:PRAD
cls
echo 1. Paleid�ia fail�, kuris palygina 2 skai�ius.
echo 2. Paleid�ia fail�, kuris sukuria nauj� katalog�, nukopijuoj� � j� visus einamojo katalogo failus, parodo naujo katalogo turin� cmd lange.
echo 3. Paleid�ia komandin� fail�, kuris atlieka �vest� skai�i� dalyba ir i�veda rezultat� su liekana.
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
echo �veskite skai�ius.
echo �veskite pirm� skai�i�
set /p pirmas=
echo �veskite antr� skai�i�
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
echo �veskite skai�ius.
echo �veskite pirm� skai�i�
set /p pirmas=
echo �veskite antr� skai�i�
set /p antras=
CALL Z:\5LAB\dalyba.bat %pirmas% %antras%
GOTO PRAD