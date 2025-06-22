#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int fibonacci = 1;
    for(int i = 1 ; i<=n ; i++)
    {
      fibonacci += i;
    }
    cout<<fibonacci;
}