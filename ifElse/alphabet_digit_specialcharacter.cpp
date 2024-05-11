// WAP to check weather it is alphabet, digit, special character.
#include<iostream>
using namespace std;
int main()
{
    char a;
    cin>>a;
    if((a>='A'&&a<='Z')||(a>='a'&&a<='z'))
    {
        cout<<a<<" is the alphabet";
    }
    else if (a>='0'&&a<='9')
    {
        cout<<a<<" is the digit";
    }
    else
    {
        cout<<a<<" is the special character";
    }
    return 0;
}