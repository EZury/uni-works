#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int n, m;
	unsigned long long Alga = 0;		//Dėl apribojimų, nereikia jaudintis dėl didelių duomenų.
  
	cin >> n >> m;
  
	for (int i = 1; i <= m; i++)
		Alga += pow(n * 1.0, i);
    
	cout << Alga << endl;
   
	return 0;
}