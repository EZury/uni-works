#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	int n;
	long long ats = 1;
  
	cin >> n;
  
	for (int i = 1; i <= n; i++){
		ats = ats * 2;
		ats = ats % 1000;
	}
  
	if (n >= 10)
		cout << setfill('0') << setw(3) << ats << endl;
	else 
		cout << ats << endl;
	
	return 0;
}