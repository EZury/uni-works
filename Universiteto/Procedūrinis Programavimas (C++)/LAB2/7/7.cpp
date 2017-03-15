#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
  long long x[81] = {0, 1};
  int n;
  
  cin >> n;
  
  for (int i = 2; i <= n; i++){
    x[i] = x[i - 1] + x[i - 2];
  }
  
  cout << x[n];
  
  return 0;
}
