#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double KintamasisA, KintamasisB, KintamasisC;
    double x;
    cin >> KintamasisA >> KintamasisB >> KintamasisC;
    
    x = (KintamasisB + sqrt(pow(KintamasisB, 2) - KintamasisA * KintamasisC)) / (2 * KintamasisA);
    
    cout << fixed << setprecision(3) << x << endl;

    return 0;
}