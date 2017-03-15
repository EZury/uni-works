#include <iostream>
#include <iomanip>

using namespace std;
//---------------------------------
bool ArKartojasi(int);
//---------------------------------
int x[81];
//---------------------------------
int main ()
{
  int n;
  
  cin >> n;
  
  for (int i = 0; i < n; i++){
    cin >> x[i];
    if (ArKartojasi(i) == true){
      cout << "Ne";
      return 0;
    }
  }
  
  cout << "Taip";
  
  return 0;
}
bool ArKartojasi(int n)
{
  for (int i = 0; i < n; i++)
    if (x[i] == x[n])
      return true;
   return false;
}