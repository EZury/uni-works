//Pvz
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
//---------------------------------
const char CDfv[] = "Duomenys13.txt";
const char CRfv[] = "Rezultatai13.txt";
const int CMax = 30;
//---------------------------------
void Skaityti(string A[], int & n);
void Spausdinti(string A[], int n, string komentaras);
void Rikiuoti(string A[], int n);
void Ilgiausias(string A[], int n);
//---------------------------------
int main ()
{
	system ("chcp 1257");

	string A[CMax]; int n;
	Skaityti(A, n);
    ofstream fr(CRfv);
    Spausdinti(A, n, "Pradiniai duomenys");
    Rikiuoti(A, n);
    Spausdinti(A, n, "Surikiuoti duomenys");
    Ilgiausias(A, n);
    fr.close();

	return 0;
}
void Skaityti(string A[], int & n)
{
    ifstream fd(CDfv);
    fd >> n;                            // perskaitomas eiluèiø skaièius
    fd.ignore(80, '\n');                // faile pereinama á kitos eilutës pradþià
    for (int i = 0; i < n; i++)
        getline(fd, A[i]);              // perskaitomi visi simboliai iki failo eilutës pabaigos ir
                                        // pereinama á kitos eilutës pradþià
    fd.close ();
}
void Spausdinti(string A[], int n, string komentaras)
{
    ofstream fr(CRfv, ios::app);        // srautas paruoðiamas papildyti
    fr << "--------------------------------" << endl;
    fr << komentaras << endl;
    fr << "--------------------------------" << endl;
    for (int i = 0; i < n; i++)
        fr << A[i] << endl;
    fr.close();
}
// Abëcëliðkai rikiuoja masyve A(n) laikomas simboliø eilutes
void Rikiuoti(string A[], int n)
{
    string eil;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            // Dvi simboliø eilutes palygina ir, jeigu reikia, sukeièia vietomis
            if (A[j] < A[i]){
                eil = A[j];
                A[j] = A[i];
                A[i] = eil;
            }
}
void Ilgiausias(string A[], int n)
{
    string max = A[0];
    for (int i = 1; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (max.length() < A[i].length()){
                max = A[i];
            }
    ofstream fr(CRfv, ios::app);
    fr << "--------------------------------" << endl;
    fr << "Ilgiausias vietovardis" << endl;
    fr << "--------------------------------" << endl;
    fr << max << endl;
    fr.close();
}
