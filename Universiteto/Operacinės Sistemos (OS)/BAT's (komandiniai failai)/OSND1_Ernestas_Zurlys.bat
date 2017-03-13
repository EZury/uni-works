@echo off
CHCP 1257
set Dok=Veiksmai.txt
:loop
set KPav=
cls
choice /c 123 /t 12 /d 1 /m "Pasirinkite: [1] Katalogo s�ra�as [2] Katalog� medis [3] Kitos komandos"

IF errorlevel 3 goto M3
IF errorlevel 2 goto M2
IF errorlevel 1 goto M1

:M3
cls
choice /c 123 /t 12 /d 3 /m "[1] Katalogo k�rimas/fail� veiksmai [2] Paprasti skai�iavimai [3] Gr��ti � prad�i�"

IF errorlevel 3 goto loop
IF errorlevel 2 goto M32
IF errorlevel 1 goto M31

:M2
tree
pause
goto loop

:M1
dir
pause
goto loop

:M32
echo Matematin�s funkcijos:
choice /c 123 /t 12 /d 3 /m "[1] Faktorialas [2] Veiksmai su dvejais skai�iais [3] Gr��ti atgal"

IF errorlevel 3 goto M3
IF errorlevel 2 goto M322
IF errorlevel 1 goto M321

:M31
echo �veskite katalogo pavadinim�:
set /p KPav=
choice /c 12 /t 8 /d 2 /m "[1] Sukurti katalog�? [2] Gr��ti atgal"

IF errorlevel 2 goto M3
IF errorlevel 1 goto M311

:M311
MD %KPav%
echo Sukurtas katalogas: %KPav% >> %Dok%
tree
echo.
timeout /t 8
cls
echo Pasirinkite kokius esamo katalogo failus perkopijuoti:
choice /c 1234 /t 12 /d 4 /m "[1] .txt [2] .bat [3] visus failus [4] Gr��ti � prad�i�"

IF errorlevel 4 goto loop
IF errorlevel 3 FOR %%a in (*.*) DO (Copy %%a %KPav% & echo Failas %%a & echo %%a >> %Dok%)
IF errorlevel 2 FOR %%a in (*.bat) DO (Copy %%a %KPav% & echo Failas %%a & echo %%a >> %Dok%)
IF errorlevel 1 FOR %%a in (*.txt) DO (Copy %%a %KPav% & echo Failas %%a & echo %%a >> %Dok%)
dir %KPav%
pause
goto loop

:M322 :Meniu pasirinkti k� daryti su dviejais skai�iais:
echo �veskite norima pirm�j� skai�i�:
set /p sk1=
echo Antr� skai�i�:
set /p sk2=
choice /c 123 /t 12 /d 3 /m "[1] Lyginimas [2] Skai�iavimas [3] Gr��ti atgal"

IF errorlevel 3 goto M3
IF errorlevel 2 goto Skai
IF errorlevel 1 goto Lyg

:M321  :Sukursiu per �� .bat fail� nauja .bat fail� su kuriuo atliksiu u�davinius:
(
echo @echo off
echo set sum=1
echo for /l %%%%b in (2,1,%%1^) do set /a sum=sum*%%%%b
echo echo %%1! = %%sum%%
) > Faktorialas.bat
echo �veskite skai�i�, kurio norite su�inoti faktorial�:
set /p sk=
call Faktorialas.bat %sk%
pause
echo Jeigu norite i�trinti Faktorialo komandin� fail� ra�ykite "taip".
set /p zod=
IF %zod%==taip del Faktorialas.bat
goto M3

:Lyg
IF %sk1% LSS %sk2% echo %sk1% ^< %sk2%
IF %sk1% GTR %sk2% echo %sk1% ^> %sk2%
IF %sk1% EQU %sk2% echo %sk1% ^= %sk2%
pause
goto M322

:Skai
echo �vekite �enkl� (+, -, /, *):
set /p zen=
IF %zen%==^+ set /a ats=%sk1%+%sk2%
IF %zen%==^- set /a ats=%sk1%-%sk2%
IF %zen%==^/ set /a ats=%sk1%/%sk2%
IF %zen%==^* set /a ats=%sk1%*%sk2%
echo %sk1% %zen% %sk2% = %ats%
pause
goto M322