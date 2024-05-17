// WAP to display the name of a day of the week based on its numeric representation
#include<iostream>
using namespace std;
int main()
{
    int day;
    cin>>day;
    switch(day)
    {
        case 1:
        {
            cout<<" sunday";
            break;
        }
        case 2:
        {
            cout<<" Monday";
            break;
        }
        case 3:
        {
            cout<<" Tuesday";
            break;
        }
        case 4:
        {
            cout<<" Wednesday";
            break;
        }
        case 5:
        {
            cout<<" Thrusday";
            break;
        }
        case 6:
        {
            cout<<" Friday";
            break;
        }
        case 7:
        {
            cout<<" Saturday";
            break;
        }
        default:
        {
            cout<<" invalid input";
        }
    }
    return 0;
}