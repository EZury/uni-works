@echo off
title Katalogo sukurimas
set zod=
echo �veskite katalogo pavadinim�, kur� nor�tumete sukurti.
set /p zod=
cls
MD %zod%
echo Ktalogas sukurtas pavadinimu %zod%
dir