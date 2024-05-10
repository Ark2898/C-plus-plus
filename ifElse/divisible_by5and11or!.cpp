// WAP to check number is divisible 5 & 11 or not
#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a%5==0&&a%11==0)
    {
        cout<<a<< " is divisible by 5&11";
    }
    else 
    {
        cout<<a<<" is not divisible by 5&11";
    }
    return 0;
}