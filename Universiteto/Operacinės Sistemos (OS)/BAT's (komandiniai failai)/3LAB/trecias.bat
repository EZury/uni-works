@echo off
echo Komandinio failo vardas � %0
echo �vesti skai�iai � %1 %2
echo Ar norite palyginti �vestus skai�ius? Jeigu taip, spauskite bet kok� klavi��, jeigu ne � CTRL+C
pause>null
IF %1 GTR %2 (echo %1^>%2)
IF %1 LSS %2 (echo %1^<%2)
IF %1 EQU %2 (echo %1^=%2)
echo Ar norite i�trinti fail� null.? Jeigu taip, spauskite bet kok� klavi��, jeigu ne � CTRL+C
pause>null
IF EXIST null. (DEL null&echo Failas null.i�trintas) ELSE echo Failas null. neegzistuoja