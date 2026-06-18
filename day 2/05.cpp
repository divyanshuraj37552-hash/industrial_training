// to find a number is positive , negative or zero

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;

    if(num>0)
    {
        cout<<"positive";
    }
    else if(num<0)
    {
        cout<<"Negative";
    }
    else
    {
        cout<<"zero";
    }
    return 0;

}