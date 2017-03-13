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

	int n, k = 0, bm = 0;

	cout << "Kiek yra sandelyje kompiuteriø? n = "; cin >> n;

	int  m[n], ms[n];

	for (int i = 1; i <= n; i++){
        cout << "Kelintais metai pagamintas " << i << " kompiuteris ir jo svoris m" << i << " =, ms" << i << " = "; cin >> m[i] >> ms[i];
        if (m[i] <= 2005){
            k = k + 1;
            bm = bm + ms[i];
        }
	}

	cout << "Iðveðti " << k << " kompiuteriai ir jø bendra masë yra " << bm << "." << endl;

	return 0;
}
