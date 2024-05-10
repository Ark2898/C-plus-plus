// WAP to find the year is leap or not
#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if((a%400==0)||(a%4==0&&a%100!=0))
    {
        cout<<a<<" is the leap year";
    }
    else
    {
        cout<<a<<" is not a leap year";
    }
    return 0;
}