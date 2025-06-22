#include<iostream>
using namespace std;
int main()
{
    int cp;
    cout<<"The cost price of the article is :";
    cin>>cp;
    int sp;
    cout<<"The selling perice of the article is:";
    cin>>sp;
    if (cp<=sp)
    {
        cout<<"Profit is made\n";
        int x = cp - sp;
        cout<<"Profit of:"<<x<<" "<<"is made";
    }
    else
    cout<<"Loss is made\n";
    int y = sp-cp;
    cout<<"Loss of:"<<y<<" "<<"is made";   
}