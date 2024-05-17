// Wap
#include<iostream>
using namespace std;
int main()
{
    int a, count=0;
    cin<< a;
    while(a)
    {
        if(a>=500)
        {
            count=a/500;
            a=a%500;
        }
    }
    return 0;
}