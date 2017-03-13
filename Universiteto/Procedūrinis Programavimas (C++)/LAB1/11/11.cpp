#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int a, b, c;
	int D;
  
	cin >> a >> b >> c;
  
	D = pow(b * 1.0, 2) - (4 * a * c);
  
	if (c == 0)
		cout << -(b / a) << "_" << 0 << endl;
	else if (D > 0)
		cout << (-b - sqrt(D * 1.0)) / (2 * a) << "_" << (-b + sqrt(D * 1.0)) / (2 * a) << endl;
	else if (D == 0)
		cout << -(b / (2 * a)) << endl;
	else
		cout << "NO" << endl;
  
	return 0;
}
