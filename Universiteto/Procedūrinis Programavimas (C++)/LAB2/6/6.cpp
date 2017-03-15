#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
  int min = 32000, max = -32000;
  int n, x;
  
  cin >> n;
  
  for (int i = 0; i < n; i++){
    cin >> x;
    if (x > max)
      max = x;
    else if (x < min)
      min = x;
  }
  
  cout << max + min;
  
  return 0;
}