#include <iostream>
#include <iomanip>

using namespace std;
//---------------------------------
bool Pirminis(int n);
//---------------------------------
int main ()
{
  int n, kiekis = 0, x;
  
  cin >> n;
  
  for (int i = 0; i < n; i++){
    cin >> x;
    if(Pirminis(x) == true)
      kiekis++;
  }
  
  cout << kiekis;
  
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