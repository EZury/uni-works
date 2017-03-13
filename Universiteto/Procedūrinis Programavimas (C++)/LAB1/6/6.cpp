//-------------------------------------
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <iomanip>
//-------------------------------------
using namespace std;
//-------------------------------------
void Tvarkymas (int a[]);
//-------------------------------------
int main()
{
    int Kintamasis[3];
    cin >> Kintamasis[0] >> Kintamasis[1] >> Kintamasis[2];
    
    Tvarkymas(Kintamasis);
    cout << Kintamasis[0] << "," << Kintamasis[1] << "," << Kintamasis[2];
    
    return 0;
}
void Tvarkymas (int a[])
{
    int laik;
    for (int j = 0; j < 3; j++)
        for (int i = 0; i < 3 - 1; i++)
            if (a[i] > a[i + 1]){
                laik = a[i];
                a[i] = a[i + 1];
                a[i + 1] = laik;
            }
}