#include <iostream>
using namespace std;    

int a,b,c,d,n,flag;
void ratusan(int c);
void puluhan(int b);
void satuan(int a);
void belasan(int a);

int main()
{
    cout << "Masukan Angka: ";
    cin >> n;

    if (n >99 && n < 1000){
        a = n%10;
        flag= n/10;
        b = flag%10;
        flag= flag/10;
        c = flag%10;
    }
    else if (n <=99){
        a = n%10;
        flag= n/10;
        b = flag%10;
    }

    cout << "a =" << a << endl;
    cout << "b =" << b << endl;
    cout << "c =" << c << endl;
    cout << "n =" << n << endl;
    
    if(n>99)
    {
        ratusan(c);
    }

    if (n >210 && n <220)
    {
        belasan(a);
    }
    else if (n >99 && n < 1000){
        puluhan(b);
        satuan(a);
    }
   

}

void ratusan(int c)
{
    if (c == 1)
    {
        cout << "seratus ";
    }
    else if (c == 2)
    {
        cout << "duaratus ";
    }
    else if (c == 3)
    {
        cout << "tigaratus ";
    }
    else if (c == 4)
    {
        cout << "empatratus ";
    }
    else if (c == 5)
    {
        cout << "limaratus ";
    }
    else if (c == 6)
    {
        cout << "enamratus ";
    }
    else if (c == 7)
    {
        cout << "tujuhratus ";
    }
    else if (c == 8)
    {
        cout << "delapanratus ";
    }
    else if (c == 9)
    {
        cout << "sembilanratus ";
    }

}

void puluhan(int b)
{
    if (b == 1 )
    {
        cout << "sepuluh ";
    }
    else if (b == 2)
    {
        cout << "duapuluh ";
    }
    else if (b == 3)
    {
        cout << "tigapuluh ";
    }
    else if (b == 4)
    {
        cout << "empatpuluh ";
    }
    else if (b == 5)
    {
        cout << "limapuluh ";
    }
    else if (b == 6)
    {
        cout << "enampuluh ";
    }
    else if (b == 7)
    {
        cout << "tujuhpuluh ";
    }
    else if (b == 8)
    {
        cout << "delapanpuluh ";
    }
    else if (b == 9)
    {
        cout << "sembilanpuluh ";
    }


}

void satuan(int a)
{
    if (a == 1)
    {
        cout << "satu ";
    }
    else if (a == 2)
    {
        cout << "dua ";
    }
    else if (a == 3)
    {
        cout << "tiga ";
    }
    else if (a == 4)
    {
        cout << "empat ";
    }
    else if (a == 5)
    {
        cout << "lima ";
    }
    else if (a == 6)
    {
        cout << "enam ";
    }
    else if (a == 7)
    {
        cout << "tujuh ";
    }
    else if (a == 8)
    {
        cout << "delapan ";
    }
    else if (a == 9)
    {
        cout << "sembilan ";
    }
}

void belasan(int a)
{
    if (a == 1)
    {
        cout << "sebelas ";
    }
    else if (a == 2)
    {
        cout << "duabelas ";
    }
    else if (a == 3)
    {
        cout << "tigabelas ";
    }
    else if (a == 4)
    {
        cout << "empatbelas ";
    }
    else if (a == 5)
    {
        cout << "limabelas ";
    }
    else if (a == 6)
    {
        cout << "enambelas ";
    }
    else if (a == 7)
    {
        cout << "tujuhbelas ";
    }
    else if (a == 8)
    {
        cout << "delapanbelas ";
    }
    else if (a == 9)
    {
        cout << "sembilanbelas ";
    }
}