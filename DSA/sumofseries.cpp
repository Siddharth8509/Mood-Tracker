#include<iostream>
using namespace std;
/*int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int sum=0;
    int sub=0;
    int series;
    for(int i =1 ; i<=n; i++)
    {
        if(i%2!=0;)
        sum+=i;
        else
        sub+=i;
    }
    series=sum-sub;
    cout<<series;

}*/
int main()
{
    int n;
    cout<<"Enter a number";
    cin>>n;
    int sum;
    if(n%2==0)
    {
        n=n*-1;
        cout<<n;
    }
    else
    {
        n=-1*(n/2)+n;
        cout<<n;
    }
    
}
