// Katino vakarien�
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <iomanip>
using namespace std;

int main ()
{
	system ("chcp 1257");

	double  s[255],     //�uvies svoris
            ss = 0;     //�uvies svorio suma
    int n,              //Kiek �uv�
        zs[255],        //�uvies skanumas
        sz = 0;         //Skani� �uv� suma

    cout << "�veskite kiek katinas sugavo �uv�, n = "; cin >> n;

    for (int i = 1; i <= n; i++){
        cout << i << "-os �uvies svoris "; cin >> s[i];
        cout << "Ar skani (1-skani, 0-neskani)? "; cin >> zs[i];

        if ((s[i] >= 1) && (zs[i] == 1)){
            ss = ss + s[i];
            sz = sz + zs[i];
        }
    }

    cout << "Skanios �uvys " << sz << ", o j� svoris yra " << fixed << setprecision(2) << ss << endl;

	return 0;
}
