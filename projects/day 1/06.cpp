#include<iostream>
using namespace std;

int main()
{
    int cel;
    float fh;

    cout<<"Enter temperature"<<endl;
    cin>>cel;

    fh = cel*(9/5.0)+32;

    cout<<"Temperature in Fahrenheit= "<<fh;
    return 0;
}