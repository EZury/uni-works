#include <iostream>

using namespace std;

int main ()
{
  int x[2] = {0, 0};
  int n;
  
  cin >> n;
  
  for (int i = 0; i < n; i++){
    cin >> x[1];
    if (i == 0)
      x[0] = x[1];
  }
  
  cout << x[0]+ x[1];
  
  return 0;
}