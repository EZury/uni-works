@echo off
echo.
set sum=0
:CIK
IF "%1" NEQ "" (
MD %1
set /a sum=sum+1
shift
goto CIK
)
echo Sukurti katalogai: %*
echo Katalog� skai�ius: %sum%
