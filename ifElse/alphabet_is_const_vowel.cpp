// WAP to check input alphabet is const or vowels
#include<iostream>
using namespace std;
int main()
{
    char a;
    cin>>a;
    if(a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U')
    {
        cout<<a<<" is the vowels";
    }
    else
    {
        cout<<a<<" is the constant";
    }
    return 0;
}