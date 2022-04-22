#include <iostream>
using namespace std;

#define M 20
#define N 13

void isidata(int A[][N], int m, int n);
void tampil(int A[][N], int m, int n);

int main() 
{
     int A[M][N];
    isidata(A, M, N);
    tampil(A, M, N);
}


void isidata(int A [][N], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {   
             A[i][j]= 0;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        int iy=(rand() % m);
        int ix=(rand() % n);
        int isi = (rand() % 1000);
        A[iy][ix] = isi;

    }
}

void tampil(int A [][N], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
}