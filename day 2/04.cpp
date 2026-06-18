//grade calcultor

#include<iostream>
using namespace std;

int main()
{
    int s1,s2,s3,s4,s5;
    float per;
    cout<<"Enter marks of five subjects"<<endl;
    cin>>s1>>s2>>s3>>s4>>s5;

    per = ((s1+s2+s3+s4+s5)/500.0)*100;


if(per>90 && per<100)
{
    cout<<"A";
}
else if (per>75 && per<80)
{
    cout<<"B";
}
else if(per>70 && per<75)
{
    cout<<"C";
}
else if(per>65 && per<70)
{
    cout<<"D";
}
else if(per>50 && per<65)
{
    cout<<"E";
}
else 
{
    cout<<"Fail";
}
  return 0;
}