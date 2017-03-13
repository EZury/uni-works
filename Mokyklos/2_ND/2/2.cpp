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

    cout << "Kiek knygø reikia perskaityti per vasarà? n = "; cin >> n;
    cout << "Kiek vidutiniðkai vienoje knygoje yra puslapiø? p = "; cin >> p;
    cout << "Kiek savaièiø skaitys? s = "; cin >> s;

    for (int i = 1; i <= n; i++){
        cout << "Skaitys p" << i << " = "; cin >> ps[i];
        ps[0] = ps[0] + ps[i];
    }

    if ((n * p) <= (ps[0] * s))
        cout << "Jonas knygas perskaityti spës" << endl;
    else
        cout << "Jonas knygas perskaityti nespës" << endl;

	return 0;
}
