#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	int a, b, c, d, x[4], kiek = 0;
  
	cin >> a >> b >> c >> d;
  
	for (int i = -1000; i <= 1000; i++)
	{
		if (a * (i * i * i) + b * (i * i) + c * i + d ==0)
		{
			x[kiek] = i;
			kiek++;
		}
	}
  
	for (int i = 0; i < kiek; i++)
	{
		if (i + 1 == kiek)
			cout << x[i] << endl;
		else
			cout << x[i] << "_";
	}
	
	return 0;
}