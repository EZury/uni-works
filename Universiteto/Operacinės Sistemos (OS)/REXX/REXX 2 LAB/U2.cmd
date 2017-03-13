did = 0
DO FOREVER
	SAY 'Áveskite skaièius, programa nustatys didþiausià, arba þodá „stop“'
	PULL n
	IF n='STOP' THEN
		LEAVE
	IF n>did THEN
		did = n
END
SAY 'Didþiausias ávestas n sakièius =' did