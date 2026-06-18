// Simple calculator

#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    char ch;
    cout<<"Enter two numbers"<<endl;
    cin>>num1>>num2;
    cout<<"Enter opearation"<<endl;
    cout<<"+ = Addition"<<endl<<"- = Subtraction"<<endl<<"* = product"<<endl<<"/ =  division"<<endl;
    cin>>ch;

    switch(ch)
    {
      case '+':
      {
        cout<<"sum = "<<num1 + num2;
        break;
      }

      case '-':
      {
        cout<<"Difference = "<<num1-num2;
        break;
      }

      case '*':
      {
        cout<<"product = "<<num1*num2;
        break;
      }

      case '/':
      {
        cout<<"Division = "<<num1/float(num2);
        break;
      }
      default:
      {
        cout<<"Try aggain";
      }
    }
    return 0;
}