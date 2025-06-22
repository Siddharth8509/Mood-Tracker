#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number";
    cin>>n;
    int i=0;
    int sum=0;
    while(n>0)
    {
        i=n%10;
        sum+=i;
        n=n/10;
    }
    cout<<sum;
}