//vieta programos vardui
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <iomanip>
using namespace std;

int main ()
{
	system ("chcp 1257");

	int n,
        v;
    double p;

    cout << "�veskite kiek Lietuvoje yra automobili� n = "; cin >> n;
    cout << "�veskite kiek pardav� v�liav� v = "; cin >> v;

    p = (double) (v * 100) / n;

    cout << "Pasipuo�� p = " << fixed << setprecision(1) << p << "% automobili�" << endl;

	return 0;
}
