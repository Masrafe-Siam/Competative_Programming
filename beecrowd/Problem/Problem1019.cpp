#include <iostream>
using namespace std;

int main()
{
    int value;
    int hour;
    int sec;
    int min;
    int temp;
cin>>value;
hour=value/3600;
    temp=value%3600;
    min=temp/60;
    sec=temp%60;

    cout<<hour <<":"<<min<<":"<<sec<<endl;
    return 0;
}