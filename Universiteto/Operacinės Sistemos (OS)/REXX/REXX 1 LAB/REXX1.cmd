SAY "Áveskite apskaièiuotà arba ketinamà gauti mënesio atlyginimà:"
PULL Alga

SAY "Vaikø (ávaikiø), kuriuos faktiðkai auginate, skaièius (Iki 18 metø)"
PULL VS

SAY "Auginate vienas(-a) arba ne vienas(-a), (1, 2)"
PULL TS

SAY "Nurodykite Jûsø darbingumo, specialiøjø poreikiø, neágalumo lygá:"
SAY "Nuo 0-25% arba nuo 30-55%"
PULL DL

IF Alga < 0 | VS < 0 | TS < 0 | DL < 0 THEN
	DO
		SAY "Ávesti klaidingi duomenys ()"
		RETURN
END

IF DL <= 25
	THEN pagNPD = 270
ELSE IF DL >= 30 & DL <= 55
	THEN pagNPD = 210
ELSE
	SELECT
		WHEN Alga > 938.2
			THEN pagNPD = 0
		WHEN Alga > 350
			THEN pagNPD = 200 - 0.34 * (Alga - 350)
		WHEN Alga <= 350
			THEN pagNPD = 200
END

NPD = pagNPD + ((120 * VS) / TS)
SAY pagNPD

SAY NPD