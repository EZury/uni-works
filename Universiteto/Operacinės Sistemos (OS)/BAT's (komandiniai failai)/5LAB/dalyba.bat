@echo off
echo Komandinio failo vardas � %0
echo �vesti skai�iai � %1 %2
echo Ar norite palyginti �vestus skai�ius? Jeigu taip, spauskite bet kok� klavi��, jeigu ne � CTRL+C
pause>null
set /a rez= %1 / %2
set /a liek= %1 %% %2
echo Sveikoji dalis: %rez% ir liekana %liek%
pause>null