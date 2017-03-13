#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;
//---------------------------------
bool Pirminis(int n);
//---------------------------------
int main()
{
	int n;
  
	cin >> n;
  
	if (Pirminis(n) == false || n == 1)
		cout << "NE" << endl;
	else if (Pirminis(n) == true)
		cout << "TAIP" << endl;
	
	return 0;
}
bool Pirminis(int n)
{
	bool tarp;
	for (int i = 1; i <= n; i++){
		if (n % i != 0 && i != 1 || n == i){
			tarp = true;
		}
		else if (i != 1){
			return false;
		}
	}
	return tarp;
}