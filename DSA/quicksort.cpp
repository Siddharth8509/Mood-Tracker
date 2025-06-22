#include<bits/stdc++.h>
using namespace std;
int quick_sort_partition(vector<int> &arr, int low , int high)
{
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j)
    {    
        while(i<=high && arr[i]<=pivot)
    {
        i++;
    }
    while(j>=low && arr[j]>pivot)
    {
        j--;
    }
    if(i<j)
    {
        swap(arr[i],arr[j]);
    }
    }
    swap(arr[low],arr[j]);
    return j;
}
void quick_sort(vector<int> &arr, int low , int high)
{
    if(low>=high)
    {
        return;
    }
    int partition = quick_sort_partition(arr,low,high);
    quick_sort(arr,low,partition-1);
    quick_sort(arr,partition+1,high);
    return;
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quick_sort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}