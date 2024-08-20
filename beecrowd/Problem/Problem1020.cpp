#include <iostream>
using namespace std;

int main()
{
    int value;
    int years;
    int mon;
    int day;
    int temp;
cin>>value;
years=value/365;
    temp=value%365;
    mon=temp/30;
    day=temp%30;

    cout<<years<<" ano(s)"<<endl;
    cout<<mon<<" mes(es)"<<endl;
    cout<<day<<" dia(s)"<<endl;
    return 0;
}