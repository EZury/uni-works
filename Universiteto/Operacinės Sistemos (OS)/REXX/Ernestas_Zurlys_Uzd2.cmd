chcp 1257

SAY 'Áveskite mënesio eilës numerá n'
PULL n

SELECT
	WHEN n = 1 | n = 2 | n = 12
		THEN SAY 'Þiema'
	WHEN n = 3 | n = 4 | n = 5
		THEN SAY 'Pavasaris'
	WHEN n = 6 | n = 7 | n = 8
		THEN SAY 'Vasara'
	WHEN n = 9 | n = 10 | n = 11
		THEN SAY 'Ruduo'
OTHERWISE
SAY error
SAY 'Ávesta bloga n reikðmë (1 - 12)'
END