// #include<bits/stdc++.h>
// using namespace std;
// void func(int i, int n, int arr[])
// {
//     if (i<0) return;
//     cout<<arr[i]<<" ";
//     func(i-1,n,arr);
// }
// int main()
// {
//     int arr[]={1,2,3,4,5};
//     int n=5;
//     func(n-1,n,arr);
// }
// #include<bits/stdc++.h>
// using namespace std;
// bool func(int i, string &s)
// {
//     if(i>=s.size()/2) return true;

//     if (s[i]!=s[s.size()-i-1])
//     return false;

//     return func(i+1,s);
// }
// int main()
// {
//     string s="madam";
//     cout<<func(0,s);
    

// }
#include<bits/stdc++.h>
using namespace std;
int fun(int n)
{
    if(n<=1) return n;

    fun(n-1);
    fun(n-2);
    return fun(n-1)+fun(n-2);
}
int main()
{
    int n=5;
    cout<<fun(n);
    return 0;
}