#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	long long n, m, ats = 0;
  
	cin >> n >> m;
  
	while (n >= 1){
		if (n % 2 != 0)
			ats += m;
		n /= 2;
		m *= 2;
	}
  
	cout << ats << endl;
	
	return 0;
}