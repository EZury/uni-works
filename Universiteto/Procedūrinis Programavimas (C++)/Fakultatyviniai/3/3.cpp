#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
//---------------------------------
using namespace std;
//---------------------------------
string Didziausias(string A[]);
//---------------------------------
int main()
{
	string A[3];
  
	cin >> A[0] >> A[1] >> A[2];
  
	cout << Didziausias(A) << endl;
  
	return 0;
}
string Didziausias(string A[])
{
	string max = A[0];
	for (int i = 1; i < 3; i++){
		if (A[i].length() > max.length())
			max = A[i];
		else if (A[i].length() == max.length() && A[i] > max)
			max = A[i];
	}
	return max;
}
