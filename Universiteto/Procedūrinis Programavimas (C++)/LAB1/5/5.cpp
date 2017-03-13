#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int Skaiciai[3], DidziausiasSkaicius = 0;

	for (int i = 0; i <= 2; i++){
		cin >> Skaiciai[i];
		if(Skaiciai[i] > DidziausiasSkaicius)
			DidziausiasSkaicius = Skaiciai[i];
	}
  
	cout << DidziausiasSkaicius << endl;

	return 0;
}