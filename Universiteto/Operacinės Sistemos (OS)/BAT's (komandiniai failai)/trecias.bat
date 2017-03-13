@echo off
echo Komandinio failo vardas – %0
echo Ávesti skaièiai – %1 %2
echo Ar norite palyginti ávestus skaièius? Jeigu taip, spauskite bet koká klaviðà, jeigu ne – CTRL+C
pause>null
IF %1 GTR %2 (echo %1^>%2)
IF %1 LSS %2 (echo %1^<%2)
IF %1 EQU %2 (echo %1^=%2)
echo Ar norite iðtrinti failà null.? Jeigu taip, spauskite bet koká klaviðà, jeigu ne – CTRL+C
pause>null
IF EXIST null. (DEL null&echo Failas null.iðtrintas) ELSE echo Failas null. neegzistuoja