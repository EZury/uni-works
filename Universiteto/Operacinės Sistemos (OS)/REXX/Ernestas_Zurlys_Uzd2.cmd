chcp 1257

SAY '�veskite m�nesio eil�s numer� n'
PULL n

SELECT
	WHEN n = 1 | n = 2 | n = 12
		THEN SAY '�iema'
	WHEN n = 3 | n = 4 | n = 5
		THEN SAY 'Pavasaris'
	WHEN n = 6 | n = 7 | n = 8
		THEN SAY 'Vasara'
	WHEN n = 9 | n = 10 | n = 11
		THEN SAY 'Ruduo'
OTHERWISE
SAY error
SAY '�vesta bloga n reik�m� (1 - 12)'
END