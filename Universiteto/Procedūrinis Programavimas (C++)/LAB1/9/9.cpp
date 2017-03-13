#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int L, W, H;
	int Plotas;

	cin >> L >> W >> H;
  
	Plotas = (L * H) * 2 + (W * H) * 2;
  
	if (Plotas % 16 == 0)
		cout << Plotas / 16 << endl;
	else
		cout << (Plotas / 16) + 1 << endl;

	return 0;
}