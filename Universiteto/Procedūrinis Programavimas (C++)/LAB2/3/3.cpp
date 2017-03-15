#include <iostream>

using namespace std;

int main ()
{
  int sum = 0, x, n;
  
  cin >> n;
  
  for (int i = 0; i < n; i++){
    cin >> x;
    sum += x;
  }
  
  cout << sum;
  
  return 0;
}