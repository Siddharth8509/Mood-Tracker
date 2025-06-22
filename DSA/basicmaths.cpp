#include<bits/stdc++.h>
using namespace std;
void print1(int n)
{
    int count=0;
    int i=0;
    while(n>0)
    {
        i=n%10;
        count+=1;
        n=n/10;
    }
    cout<<count;
    
}
void print2(int n)
{
    int i=0;
    int j;
    while(n>0)
    {
        j=n%10;
        i=(i*10)+j;
        n=n/10;
    }
    cout<<i;
}
void print3(int n)
{
    int j=0;
    int i;
    int k=n;
    while(n>0)
    {
        i=n%10;
        j=i*i*i+j;
        n=n/10;
    }
    if(j==k)
    {
        cout<<"Armstrong number";
    }
    else
    {
        cout<<"Not an Armstrong number";
    }
}
void print4(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
        else continue;
    }
}
void print5(int n)
{
    int i;
    cout<<"Enter the second number :";
    cin>>i;
    int hcf;
    for(int j=1;j<min(n,i);j++)
    {
        if(n%j==0 && i%j==0)
        {
            hcf=j;
        }
    }
    cout<<hcf;
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    print5(n);
}
