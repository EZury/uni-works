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
    int Kintamasis[4];
    
    for (int i = 0; i < 4; i++)
        cin >> Kintamasis[i];
        
    for (int i = 0; i < 4; i++){
        if (i != 0 && Kintamasis[i] == Kintamasis[i - 1])
            cout << "=";
        else if (i != 0 && Kintamasis [i] > Kintamasis[i - 1])
            cout << "<";
        else if (i != 0 && Kintamasis [i] < Kintamasis[i - 1])
            cout << ">";
        cout << Kintamasis[i];
    }
    
    return 0;
}
