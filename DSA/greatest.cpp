#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the first number:";
    cin>>x;
    int y;
    cout<<"Enter the second number:";
    cin>>y;
    int z;
    cout<<"Enter the third number:";
    cin>>z;
    if(x>y && x>z)
    cout<<"The greatest number is:"<<x;
    if (y>x && y>z)
    cout<<"The greatest number is:"<<y;
    else 
    cout<<"The greatest number is:"<<z;
}