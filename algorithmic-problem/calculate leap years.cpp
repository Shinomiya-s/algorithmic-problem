#include <iostream>
using namespace std;
int main(){
int year;
cout<<"���������"<<'\n';
cin>>year;
if(year%400==0){
    cout<<"����";
    return 1;}
if(year%4==0&&year%100!=0){
    cout<<"����";}
else
    cout<<"��������";
    return 0;
}
