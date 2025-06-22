#include<iostream>
using namespace std;
int main()
{
    float radius;
    cout<<"Enter the radius of thr cylinder:";
    cin>>radius;
    float height;
    cout<<"Enter the height of the cylinder:";
    cin>>height;
    float volume;
    volume = 3.14*radius*radius*height;
    cout<<"The volume of the cylinder is :"<<volume;
}