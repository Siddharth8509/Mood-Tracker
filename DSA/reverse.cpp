#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int i;
    while(n>0)
{
    i=n%10;
    cout<<i;
    n=n/10;    
}
}
