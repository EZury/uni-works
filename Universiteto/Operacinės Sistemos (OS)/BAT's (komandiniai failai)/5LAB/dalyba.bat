@echo off
echo Komandinio failo vardas – %0
echo Ávesti skaièiai – %1 %2
echo Ar norite palyginti ávestus skaièius? Jeigu taip, spauskite bet koká klaviðà, jeigu ne – CTRL+C
pause>null
set /a rez= %1 / %2
set /a liek= %1 %% %2
echo Sveikoji dalis: %rez% ir liekana %liek%
pause>null