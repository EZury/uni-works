@echo off
:PRA
set ats=
echo Áveskite pirmàjá kintamàjá.
set /p pirmas=
echo.
echo Áveskite aritmetiná veiksmo simbolá(+, -, *, /).
set /p simbolis=
echo.
echo Áveskite antràjá kintamàjá.
set /p antras=
echo.
IF not "%simbolis%"=="-" IF not "%simbolis%"=="+" IF not "%simbolis%"=="*" IF not "%simbolis%"=="/" goto ERR

:REZ
cls
echo Jûs ávëdëte: %pirmas% %simbolis% %antras%
set /a ats=%pirmas%%simbolis%%antras%
echo Atsakymas: %ats%
goto PRA

:ERR
cls
echo Buvo ávestas blogas simbolis.
goto PRA
