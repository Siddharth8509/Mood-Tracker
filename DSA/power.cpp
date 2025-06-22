#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number:";
    cin>>a;
    int b;
    cout<<"Enter another number:";
    cin>>b;
    float power = 1;
    bool flag = true;
    if (b<0)
    {
        flag = false;
        b=-b;

    }
    for (int i = 1 ; i <=b;i++)
    {
        power=power*a;
    }
    if(flag==false)
    {
        power=1/power;
    }  
        cout<<power; 

}