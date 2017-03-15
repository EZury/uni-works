#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
  int sum = 0, x, n;
  
  cin >> n;
  
  for (int i = 0; i < n; i++){
    cin >> x;
    sum += x;
  }
  
  cout << fixed << setprecision(3) <<(double) sum / n;
  
  return 0;
}