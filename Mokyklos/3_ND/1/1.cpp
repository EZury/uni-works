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

	int n, m, ms, d, k, a;

	ms = 0;

	cout << "Kiek sodininkas prirenka dëþiø? n = "; cin >> n;
	cout << "Kiek sodininkas parduoda dëþiø? m = "; cin >> m;
	cout << "Kiek dienø sodininkas vaþiavo á turgø? d = "; cin >> d;

	for (int i = 1; i <= d; i++){
        ms = ms + (n - m);
	}

	k = ms / m;
	a = ms % m;

	cout << "Sodininkas supakuos " << k << " dideliø dëþiø." << endl;
	cout << "Liks " << a << " maþø dëþiø." << endl;

	return 0;
}
