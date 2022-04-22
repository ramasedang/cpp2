#include <iostream>
using namespace std;

int main()
{

int topCount=0, count, topElement, array[1000],n;
cin >> n;
for (int i=0 ; i<n ; i++)
{
    cin>>array[i];
}

for ( int i=0 ; i<n ;i++)
{
    count=0;
    for (int j=0 ; j<n ; j++)
    {
        if (array[i]==array[j]) count++;
    }
    if (count>topCount)
    {
        topCount=count;
        topElement=array[i];
    }
}

cout<<topElement;
}