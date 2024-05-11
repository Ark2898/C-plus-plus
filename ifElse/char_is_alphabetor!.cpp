// WAP to check the alphabet or not (without using ASCII)
#include<iostream>
using namespace std;
int main()
{
    char a;
    cin>>a;
    if((a>='A'&&a<='Z')||(a>='a'&&a<='z'))
    {
        cout<<a<<" is alphabet";
    }
    else{
        cout<<a<<" is not a alphabet";
    }
    return 0;
}