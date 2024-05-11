// WAP to check whether its a uppercase or lowercase
#include<iostream>
using namespace std;
int main()
{
    char a;
    cin>> a;
    if(a>='A'&&a<='Z')
    {
        cout<<a<<" is the uppercase alphabet";
    }
    else if(a>='a'&&a<='z')
    {
        cout<<a<<" is the lowercase alphabet";
    }
    else
    {
        cout<<" invalid input";
    }
    return 0;
}