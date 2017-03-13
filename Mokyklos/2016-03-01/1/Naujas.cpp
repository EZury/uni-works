// Struktūra
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
//-----------------------------------
struct Pavadinimas{
    string Pav;
    int Metai;
};
//-----------------------------------
const char CDfv[] = "Duomenys.txt";
const char CRfv[] = "Rezultatai.txt";
const int CMax = 10;
const int CPav = 15;
//-----------------------------------
void Skaitymas(Pavadinimas A[], int & n);
void Spausdinti(Pavadinimas A[], int n);
void Rikiuoti(Pavadinimas A[], int n);
//-----------------------------------
int main ()
{
	system ("chcp 1257");

    Pavadinimas A[CMax]; int n;

    Skaitymas(A, n);
    Spausdinti(A, n);
    Rikiuoti(A, n);

	return 0;
}
void Skaitymas(Pavadinimas A[], int & n)
{
    ifstream fd(CDfv);
    fd >> n;
    char eil[CPav + 1];
    fd.ignore(80, '\n');
    for (int i = 0; i < n; i++){
        fd.get(eil, CPav);
        A[i].Pav = eil;
        fd >> A[i].Metai;
        fd.ignore(80, '\n');
    }
    fd.close();
}
void Rikiuoti(Pavadinimas A[], int n)
{
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if (A[j].Metai > A[i].Metai){
                Pavadinimas sp = A[i];
                A[i] = A[j];
                A[j] = sp;
            }
        }
    }
}
void Spausdinti(Pavadinimas A[], int n)
{
    ofstream fr(CRfv);
    for(int i = 0; i < n; i++)
        fr << A[i].Pav << A[i].Metai << endl;
    fr.close();
}
