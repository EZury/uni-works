did = 0
DO FOREVER
	SAY '�veskite skai�ius, programa nustatys did�iausi�, arba �od� �stop�'
	PULL n
	IF n='STOP' THEN
		LEAVE
	IF n>did THEN
		did = n
END
SAY 'Did�iausias �vestas n saki�ius =' did