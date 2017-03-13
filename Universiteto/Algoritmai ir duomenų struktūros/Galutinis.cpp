#include <iostream>

using namespace std;
int main()
{
    int n, suma = 0, kiek = 0;
  
    cin >> n;
    
    int M[n + 1][n + 1];
	
	if (n == 0){
		cout << "Suma = " << suma << endl;
		cout << "Vidurkis = " << suma << endl;
		return 0;
	}
    
    for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++){
			cout << "Áveskite a" << i << j << " kintamàjá: " << endl;
			cin >> M[i][j];
		}

	if (n == 1){
		cout << "Suma = " << M[1][1] << endl;
		cout << "Vidurkis = " << M[1][1] << endl;
	}
	else
	{
		for (int i = 1; i <= n; i++)
			for (int j = i + 1; j <= n; j++){
				suma += M[i][j];
				kiek++;
			}
    
		cout << "Suma = " << suma << endl;
		cout << "Vidurkis = " << suma * 1.0/kiek << endl;
	}
	
	return 0;
}