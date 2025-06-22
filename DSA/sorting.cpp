#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<=n-2;i++)
    {
        int mini=i;
        for(int j=1;j<=n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[mini]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
