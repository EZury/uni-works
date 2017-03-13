#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;
int main()
{
	char A[256] = "";
	int count = 0;
  
	cin >> A;
  
	for (int i = 0; i < strlen(A); i++){
		if ((A[i] == '<' && A[i + 1] == '-' && A[i + 2] == '-' && A[i + 3] == '<' && A[i + 4] == '<')
		|| (A[i] == '>' && A[i + 1] == '>' && A[i + 2] == '-' && A[i + 3] == '-' && A[i + 4] == '>')){
			count++;
			i+=3;
		}
	}
  
	cout << count << endl;
  
	return 0;
}