#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1;
    vector<int>a;
    for(int i=0;i<n1;i++)
    {
        cin>>a[i];
    }
    int n2;
    vector<int>b;
    for(int i=0;i<n2;i++)
    {
        cin>>b[i];
    }
    int i=0;
    int j=0;
    vector<int>Intersection;
    while(i<n1 && j<n2)
    {
        if(a[i]>b[j])
        {
            j++;
        }
        else if(a[i]<b[j])
        {
            i++;
        }
        if(a[i]==b[j])
        {
            Intersection.push_back(a[i]);
            i++;
            j++;
        }
    }
    for(int i=0;i<Intersection.size();i++)
    {
        cout<<Intersection[i]<<" ";
    }
}