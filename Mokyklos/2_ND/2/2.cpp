//vieta programos vardui
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <iomanip>
using namespace std;

const int CMax = 255;

int main ()
{
	system ("chcp 1257");

	int n,
        p,
        ps[CMax],
        s;

    ps[0] = 0;

    cout << "Kiek knyg� reikia perskaityti per vasar�? n = "; cin >> n;
    cout << "Kiek vidutini�kai vienoje knygoje yra puslapi�? p = "; cin >> p;
    cout << "Kiek savai�i� skaitys? s = "; cin >> s;

    for (int i = 1; i <= n; i++){
        cout << "Skaitys p" << i << " = "; cin >> ps[i];
        ps[0] = ps[0] + ps[i];
    }

    if ((n * p) <= (ps[0] * s))
        cout << "Jonas knygas perskaityti sp�s" << endl;
    else
        cout << "Jonas knygas perskaityti nesp�s" << endl;

	return 0;
}
