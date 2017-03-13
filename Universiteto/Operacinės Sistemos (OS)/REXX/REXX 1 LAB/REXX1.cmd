SAY "�veskite apskai�iuot� arba ketinam� gauti m�nesio atlyginim�:"
PULL Alga

SAY "Vaik� (�vaiki�), kuriuos fakti�kai auginate, skai�ius (Iki 18 met�)"
PULL VS

SAY "Auginate vienas(-a) arba ne vienas(-a), (1, 2)"
PULL TS

SAY "Nurodykite J�s� darbingumo, speciali�j� poreiki�, ne�galumo lyg�:"
SAY "Nuo 0-25% arba nuo 30-55%"
PULL DL

IF Alga < 0 | VS < 0 | TS < 0 | DL < 0 THEN
	DO
		SAY "�vesti klaidingi duomenys ()"
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