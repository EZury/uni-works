#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
//-------------------------------
const double PI = 3.14159265359;
//-------------------------------
using namespace std;

int main()
{
	int FiguraP, AukstisH, SpindulysR;
	double Turis;

	cin >> FiguraP >> AukstisH >> SpindulysR;

	if (FiguraP == 1)
		Turis = PI * AukstisH * SpindulysR * SpindulysR;
	else if (FiguraP == 2)
		Turis = (PI * SpindulysR * SpindulysR * AukstisH) / 3;
	else
		return 0;

	cout << fixed << setprecision(2) << Turis << endl;
}