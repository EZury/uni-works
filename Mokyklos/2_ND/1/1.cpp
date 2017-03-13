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

    cout << "Áveskite kiek Lietuvoje yra automobiliø n = "; cin >> n;
    cout << "Áveskite kiek pardavë vëliavø v = "; cin >> v;

    p = (double) (v * 100) / n;

    cout << "Pasipuoðë p = " << fixed << setprecision(1) << p << "% automobiliø" << endl;

	return 0;
}
