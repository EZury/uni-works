#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
  int sum = 0, x[101], n;
  double vid = 0;
  
  cin >> n;
  
  for (int i = 0; i < n; i++){
    cin >> x[i];
    sum += x[i];
  }
  
  vid = (double) sum / n;
  sum = 0;
  
  for (int i = 0; i < n; i++){
    if (x[i] > vid)
      x[i] = 1;
    sum += x[i];
  }
  
  cout << fixed << setprecision(3) << (double) sum / n;
  
  return 0;
}