SAY '�veskite skai�i�, programa apskai�iuos lygini� jos dalikli� sum�'
PULL n
sum = 0
DO d=2 to n by 2
	IF n//d='0' THEN
		sum = sum + d
END
SAY 'Suma =' sum