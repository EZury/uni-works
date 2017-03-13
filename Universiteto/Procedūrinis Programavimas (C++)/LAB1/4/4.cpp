#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int SkaiciusA, SkaiciusN, Suma = 0;

	cin >> SkaiciusA >> SkaiciusN;

	for (int i = SkaiciusA; i <= SkaiciusN; i++)
		Suma += i;
  
	cout << Suma << endl;

	return 0;
}
