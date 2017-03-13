chcp 1257
ats = 0

SAY 'Áveskite k reikðmæ'
PULL k

DO i = 1 to k
ats = ats + 1/i
END
SAY ats