@echo off
:PRA
set ats=
echo �veskite pirm�j� kintam�j�.
set /p pirmas=
echo.
echo �veskite aritmetin� veiksmo simbol�(+, -, *, /).
set /p simbolis=
echo.
echo �veskite antr�j� kintam�j�.
set /p antras=
echo.
IF not "%simbolis%"=="-" IF not "%simbolis%"=="+" IF not "%simbolis%"=="*" IF not "%simbolis%"=="/" goto ERR

:REZ
cls
echo J�s �v�d�te: %pirmas% %simbolis% %antras%
set /a ats=%pirmas%%simbolis%%antras%
echo Atsakymas: %ats%
goto PRA

:ERR
cls
echo Buvo �vestas blogas simbolis.
goto PRA
