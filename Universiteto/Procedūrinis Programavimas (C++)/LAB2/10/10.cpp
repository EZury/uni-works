#include <iostream>
#include <iomanip>

using namespace std;
//---------------------------------
int main()
{
  int n, kiekis = 0, max = 0, x;
  
  cin >> n;
  
  for (int i = 0; i < n; i++){
    cin >> x;
    if (x == 0){
      kiekis++;
      if (kiekis > max)
        max = kiekis;
    }
    else
      kiekis = 0;
  }
  if (max == 0)
    cout << "No";
  else
    cout << max;
  
  return 0;
}