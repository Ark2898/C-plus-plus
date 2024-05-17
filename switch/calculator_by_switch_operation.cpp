// Create a simple calculator program that takes two numbers and an operator (+,-,*,/) as input and performs the corresponding airthmetic operation using a switch statement.
#include <iostream>
using namespace std;
int main()
{
    char opr;
    float n1,n2;
    cin>>n1>>n2;
    {
        cout<<"Press + for add:"<<" Press - for sub:"<<" Press * for multiplication:"<<" Press / for div: ";
    }
    cin>>opr;
    switch(opr)
    {
        case '+':
        {
            cout<<n1 + n2;
            break;
        }
        case '-':
        {
            cout<<n1 - n2;
            break;
        }
        case '*':
        {
            cout<<n1 * n2;
            break;
        }
        case '/':
        {
            cout<<n1 / n2 ;
            break;
        }
        default:
        {
            cout<<"invalid input";
        }
    }
    return 0;
}