#include <iostream>
using namespace std;
int num,a,b,c,d,flag;

int main()
{
    cout << "Masukan Angka: ";
    cin >> num;

    if (num > 99 && num < 1000)
    {
        a = num % 10;
        flag = num / 10;
        b = flag % 10;
        cout << flag << endl;
        flag = num / 10;
        c = flag % 10;

        cout << c << " " << b << " " << a << " " << endl;
    }

    return 0;
}