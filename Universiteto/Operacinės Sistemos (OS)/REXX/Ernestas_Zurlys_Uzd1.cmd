chcp 1257
ats = 0

SAY '�veskite k reik�m�'
PULL k

DO i = 1 to k
ats = ats + 1/i
END
SAY ats