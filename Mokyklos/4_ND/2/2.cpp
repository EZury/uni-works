//vieta programos vardui
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <iomanip>
using namespace std;

const int CMax = 255;
const char CDfv[] = "Parduotuve.txt";
const char CRfv[] = "Rezultatai2.txt";

int main ()
{
	system ("chcp 1257");

	int n, m[CMax], k[CMax];
	double s[CMax];

	k[0] = s[0] = 0;

	ifstream fd(CDfv);

	fd >> n;
	for (int i = 1; i <= n; i++){
        fd >> m[i] >> k[i] >> s[i];
        if (m[i] >= 2008){
            k[0] = k[0] + k[i];
            s[0] = s[0] + (k[i] * s[i]);
        }
	}

	fd.close();

	ofstream fr(CRfv);

	fr << k[0] << endl;
	fr << s[0] << endl;

	fr.close();

	return 0;
}
