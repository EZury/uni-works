SAY '�veskite S '
PULL PS
SAY '�veskite x, metines pal�kanas'
PULL x

S = PS
n = 0
DO UNTIL S > PS*2
S = S + S * x/100
n = n + 1
END
SAY 'Per ' n 'metus'