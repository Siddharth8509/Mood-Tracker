#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter the amount:";
    cin>>n; 
     int n1=0;int n2=0;int n5=0; int n10=0;
     int n50=0;int n100=0; int n500=0;
     int n2000=0;
     switch (1)
     {
        case 1 :
        n2000= n/2000;
        n-=(2000*n2000);
        case 2 :
        n500= n/500;
        n-=(500*n500);
        case 3 :
        n100= n/100;
        n-=(100*n100);
        case 4 :
        n50= n/50;
        n-=(50*n50);
        case 5 :
        n10= n/10;
        n-=(10*n10);
        case 6 :
        n5= n/5;
        n-=(5*n5);
        case 7 :
        n2= n/2;
        n-=(2*n2);
        case 8 :
        n1= n/1;
        n-=(1*n1);
     }
    int notes;
    notes=n1+n2+n5+n10+n50+n100+n500+n2000;
    cout<<"The number of notes is "<<notes;
}