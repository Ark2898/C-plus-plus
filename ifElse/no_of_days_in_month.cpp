// WAP to input month number and print number of days
#include<iostream>
using namespace std;
int main()
{
    int m;
    cin>> m;
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    {
        cout<<m<<" have 31 days in month";
    }
    else if(m==4||m==6||m==9||m==11)
    {
        cout<<m<<" have 30 days in month";
    }
    else if(m==2)
    {
        cout<<m<<" have 28 days in month";
    }
    else
    {
        cout<<" invalid input";
    }
    return 0;
}