// leap year

#include<iostream>
using namespace std;

int main()
{
    int yr;
    cout<<"enter a valid year"<<endl;
    cin>>yr;

    if(yr%4==0 && yr%100!=0 || yr%400 == 0)
    {
        cout<<"Year is a leap year";
    }
    else
    {
        cout<<"Not a leap year";
    }
    return 0;
}