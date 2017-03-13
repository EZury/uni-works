//vieta programos vardui
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <iomanip>
using namespace std;

const int CMax = 255;
const char CDfv[] = "Sasiuviniai.txt";
const char CRfv[] = "Rezultatai1.txt";

int main ()
{
	system ("chcp 1257");

	int n;
	double m, s[CMax];

	s[0] = 0;

	ifstream fd(CDfv);

	fd >> n >> m;
	for (int i = 1; i <= n; i++){
        fd >> s[i];
        if (s[i] <= m)
            s[0] = s[0] + s[i];
	}

	fd.close();

	ofstream fr(CRfv);

	fr << "Gali nusipirkti sàsiuviniø uþ " << s[0];

	fr.close();

	return 0;
}
