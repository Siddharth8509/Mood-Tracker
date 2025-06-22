#include<bits/stdc++.h>
using namespace std;
void print1(int n)
{
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        cout<<"*";
        }
        cout<<endl;
    }
}
void print2(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
        cout<<"*";
        }
        cout<<endl;
    }
}
void print3(int n)
{
    for(int i = 0;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
        cout<<j;
        }
        cout<<endl;
    }
    
}
void print4(int n)
{
    for(int i = 0;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
        cout<<i;
        }
        cout<<endl;
    }
    
}
void print5(int n)
{
    for(int i = 0 ;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
        cout<<'*';
        }
        cout<<endl;
    }
    
}
void print6(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
        cout<<j;
        }
        cout<<endl;
    }
    
}
void print7(int n)
{
    for(int i = 0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
void print8(int n)
{
    for(int i=0;i<n;i++)
    {
        for (int j =0;j<i;j++)
        {
            cout<<" ";
        }
        for (int j = 0; j<2*n-(2*i+1) ; j++)
        {
            cout<<"*";
        }
        for (int j =0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
        
    }
}
void print9(int n)
{
    for(int i =1;i<=2*n-1;i++)
    {
        int stars=i;
        if(i>n)
        {
            stars=2*n-i;
        }
        for(int j=0;j<=stars;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void print10(int n)
{
    int start=1;
    for(int i =0;i<n;i++)
    {
        
        if(i%2==0)
        start=1;
        else
        start=0;
        
        for(int j=0;j<=i;j++)
        {
            cout<<start;
            start=1-start;
        }    
        cout<<endl;
    }
}
void print11(int n)
{
    for(int i =1;i<n+1;i++)
    {
     for (int j = 1; j<=i ; j++)
     {
        cout<<j;
     }
     for(int j=1;j<=2*n-2*i;j++)
     {
            cout<<" ";
     }
     for(int j=i;j>=1;j--)
     {
        cout<<j;     
     }
     cout<<endl;
    }
}
void print12(int n)
{
    int j=1;
    for(int i=0;i<n;i++)
    {
       ;
        for(int k=0;k<=i;k++)
        {
            cout<<j<<"";
            j=j+1;
        }
        cout<<endl;
    }
}
void print13(int n)
{
    for(int i=0;i<n;i++)
    {
        for(char ch='A';ch<='A'+(n-i-1);ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }

}
void print14(int n)
{
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n-i-1;j++)
    {
        cout<<" ";
    }

    char ch='A';
    int breakpoint=(2*i)/2;
    for(int j=1;j<=2*i+1;j++)
    {
        cout<<ch<<" ";
        if(j<=breakpoint)ch++;
        else ch--;
    }

    for(int j=0;j<n-i-1;j++)
    {
        cout<<" ";
    }
    cout<<endl;
   }
}
void print15(int n)
{
    for(int i=0;i<n;i++)
    {
        for(char ch='A'+n-i-1;ch<'A'+n;ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void print16(int n)
{
    int space=0;
    for(int i=0;i<n;i++)
    {
        //stars
        for(int j=0;j<=n-i;j++)
        {
            cout<<"*";
        }
        //space
        for(int j=0;j<space;j++)
        {
            cout<<" ";
        }
        //starts
        for(int j=0;j<=n-i;j++)
        {
            cout<<"*";
        }
        space+=2;
        cout<<endl;
    }

    int nxtspace=n*2-2;
    for(int i =0;i<n;i++)
    {
        //stars
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        //space
        for(int j=0;j<=nxtspace;j++)
        {
            cout<<" ";
        }
        //stars
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        nxtspace-=2;
        cout<<endl;
    }
}
void print17(int n)
{
    int spaces=2*n-2;
    for(int i=1;i<=2*n-1;i++)
    {
        int stars=i;
        if(i>n) stars=2*n-i;
        for(int j=1;j<=stars;j++)
        {
            cout<<"*";
        }    
        for(int j = 1;j<=spaces;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=stars;j++)
        {
            cout<<"*";
        }  
        cout<<endl;
        if(i<n) spaces-=2;
        else spaces+=2;
    }
}
void print18(int n)
{
    for(int i=0;i<n;i++)
    {
        if(i==0 || i==n-1)
        {
            for(int j=0;j<n;j++)
            {
                cout<<"*";
            }
        }
        else
        {
            cout<<"*";
            for(int j=0;j<n-2;j++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
}
void print19(int n)
{
    for(int i=0;i<2*n-1;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
            int top=i;
            int left=j;
            int bottom=2*n-2-i;
            int right=2*n-2-j;
            cout<<(n-min(min(top,bottom),min(left,right)))<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    print19(n);
}