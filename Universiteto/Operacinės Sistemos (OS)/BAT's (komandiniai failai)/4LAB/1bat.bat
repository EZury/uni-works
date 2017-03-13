@echo off
title Katalogo sukurimas
set zod=
echo Áveskite katalogo pavadinimà, kurá norëtumete sukurti.
set /p zod=
cls
MD %zod%
echo Ktalogas sukurtas pavadinimu %zod%
dir