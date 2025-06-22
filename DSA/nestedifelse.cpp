#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the 1st number:";
    cin>>a;
    cout<<"Enter the 2nd number:";
    cin>>b;
    cout<<"Enter the 3rd number:";
    cin>>c;
    if ((a>b && a>c) || (b>a && b>c))
    {
        if (a>b && a>c)
        cout<<"The Greatest number is:"<<a;
        else
        cout<<"The greatest number is:"<<b;
    }
    else
        cout<<"The greatest number is:"<<c;
}