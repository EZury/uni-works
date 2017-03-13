#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	int n;
  
	cin >> n;
  
	if (n == 1)
		cout << 45 << endl;
	else if (n == 2)
		cout << 4905 << endl;
	else
		cout << setw(n) << setfill('9') << left << 494 << setw(n) << setfill('0') << left << 55 << endl;
	
	return 0;
}