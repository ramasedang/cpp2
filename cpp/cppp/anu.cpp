#include <iostream>
 
using namespace std;
void seven_segment();

int binaryToDecimal(int n);
 
int num;
int main()
{

  cout << "Masukan Angka: ";
  cin >> num;

  seven_segment();
  return 0;
}


void seven_segment()
{
 if (binaryToDecimal(num) == 0)
 {
   cout << "0000000";
 }

 if (binaryToDecimal(num) == 1)
 {
   cout << "0110000";
 }

  if (binaryToDecimal(num) == 2)
  {
    cout << "1101101";
  }

  if (binaryToDecimal(num) == 3)
  {
    cout << "1111001";
  }

  if (binaryToDecimal(num) == 4)
  {=
    cout << "0110011";
  }

  if (binaryToDecimal(num) == 5)
  {
    cout << "1011011";
  }

  if (binaryToDecimal(num) == 6)
  {
    cout << "1011111";
  }

  if (binaryToDecimal(num) == 7)
  {
    cout << "1110000";
  }

  if (binaryToDecimal(num) == 8)
  {
    cout << "1111111";
  }

  if (binaryToDecimal(num) == 9)
  {
    cout << "1111011";
  }
}

int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
 
    int base = 1;
 
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
}