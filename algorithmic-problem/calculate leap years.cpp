#include <iostream>
using namespace std;
int main(){
int year;
cout<<"请输入年份"<<'\n';
cin>>year;
if(year%400==0){
    cout<<"闰年";
    return 1;}
if(year%4==0&&year%100!=0){
    cout<<"闰年";}
else
    cout<<"不是闰年";
    return 0;
}
