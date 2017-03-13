#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	int n, m, i = 0, ats = 0;
	
	cin >> n >> m;
	
	while (n >= 1){
	  if (n % 2 != 0)
	    ats += m * pow(2, i);
	  n /= 2;
	  i++;
	}
	
	cout << ats << endl;
	
	return 0;
}