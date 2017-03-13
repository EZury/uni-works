@echo off
set suma=1
FOR /l %%b in (1,1,%1) do set/a suma=suma*%%b
echo Suma ^= %suma%