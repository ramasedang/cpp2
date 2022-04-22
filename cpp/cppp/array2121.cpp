#include <iostream>
using namespace std;

// void puncak(int A[][N], int m, int n)
// {
//     int kolol = (n-1)/2;
    
// }

void pascal(int n){
    int a[n][n];
    for(int i=0;i<n;i++){
        a[i][0]=1;
        a[i][i]=1;
    }
    for(int i=2;i<n;i++){
        for(int j=1;j<i;j++){
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"masukkan jumlah baris: ";cin>>n;
    pascal(n);
    return 0;
}
