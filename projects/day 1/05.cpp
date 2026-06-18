#include<iostream>
using namespace std;

int main()
{
    int a = 9;
    int b = 3;
    int temp;

    cout<<"Before swap"<<endl<<"a = "<<a<<endl<<"b = "<<b<<endl;

   temp = a;
   a = b;
   b = temp;

    cout<<"After swap"<<endl<<"a = "<<a<<endl<<" b = "<<b<<endl;

    return 0;

}