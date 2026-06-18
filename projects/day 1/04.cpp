#include<iostream>
using namespace std;

int main()
{
    int pa,ra,ti;
    float si;

    cout<<"enter Princpal amount";
    cin>>pa;
    cout<<"Enter rate of intrest";
    cin>>ra;
    cout<<"Enter time";
    cin>>ti;

    si = (pa*ra*ti)/100.0;
   
    cout<<"Simple intrest = "<<si;
    return 0;
}