// Katino vakarienë
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <iomanip>
using namespace std;

int main ()
{
	system ("chcp 1257");

	double  s[255],     //Þuvies svoris
            ss = 0;     //Þuvies svorio suma
    int n,              //Kiek þuvø
        zs[255],        //Þuvies skanumas
        sz = 0;         //Skaniø þuvø suma

    cout << "Áveskite kiek katinas sugavo þuvø, n = "; cin >> n;

    for (int i = 1; i <= n; i++){
        cout << i << "-os þuvies svoris "; cin >> s[i];
        cout << "Ar skani (1-skani, 0-neskani)? "; cin >> zs[i];

        if ((s[i] >= 1) && (zs[i] == 1)){
            ss = ss + s[i];
            sz = sz + zs[i];
        }
    }

    cout << "Skanios þuvys " << sz << ", o jø svoris yra " << fixed << setprecision(2) << ss << endl;

	return 0;
}
