//-------------------------------------
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <iomanip>
//-------------------------------------
using namespace std;
//-------------------------------------
int main()
{
    int Skaicius, Suma = 0, kiek = 0;
    
    cin >> Skaicius;
    
    for (int i = 2; i <= Skaicius; i = i + 2){
        Suma += i;
        kiek++;
    }
    
    if (Skaicius == 1)
      cout << 0 << endl;
    else
    cout << Suma/kiek << endl;
    
    return 0;
}