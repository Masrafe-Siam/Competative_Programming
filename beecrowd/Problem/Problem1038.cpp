#include<iostream>
#include <iomanip>
using namespace std;
 
int main() {
int a;
cin>>a;
double take,amount;
if(a==1){
    cin>>take;
    amount=4.00*take;
    cout<<fixed<<setprecision(2)<<"Total: R$ "<<amount<<endl;
}else if(a==2){
    cin>>take;
    amount=4.50*take;
    cout<<fixed<<setprecision(2)<<"Total: R$ "<<amount<<endl;
}else if(a==3){
    cin>>take;
    amount=5.00*take;
    cout<<fixed<<setprecision(2)<<"Total: R$ "<<amount<<endl;
}else if(a==4){
    cin>>take;
    amount=2.00*take;
    cout<<fixed<<setprecision(2)<<"Total: R$ "<<amount<<endl;
}else if(a==5){
    cin>>take;
    amount=1.50*take;
    cout<<fixed<<setprecision(2)<<"Total: R$ "<<amount<<endl;
}
}
