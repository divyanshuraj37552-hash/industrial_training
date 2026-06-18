//largest of three

#include<iostream>
using namespace std;

int main()
{
    int a,b,c,large;
    cout<<"Enter three number"<<endl;
    cin>>a>>b>>c;

    if(a>b)
    {
        if(a>c)
        {
            large = a;
        }
    }

   else if(b>c)
    {
        large = b;
    }
    else
    {
        large = c;
    }

    cout<<"Largest of all is = "<<large;
    return 0;
}
