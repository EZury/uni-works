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

	cout << "Kiek sodininkas prirenka d��i�? n = "; cin >> n;
	cout << "Kiek sodininkas parduoda d��i�? m = "; cin >> m;
	cout << "Kiek dien� sodininkas va�iavo � turg�? d = "; cin >> d;

	for (int i = 1; i <= d; i++){
        ms = ms + (n - m);
	}

	k = ms / m;
	a = ms % m;

	cout << "Sodininkas supakuos " << k << " dideli� d��i�." << endl;
	cout << "Liks " << a << " ma�� d��i�." << endl;

	return 0;
}
