#include <iostream>
using namespace std;
int main(){
cout<<"输入大于0小于1000的整数"<<'\n';
int number;
int a=1;
cin>>number;
int answer;
if(number>0&&number<1000){
for(a=1;a<=number;a++){
    if(number%a==0){
    answer=number/a;
    cout<<answer<<",";
    }
}
}
else
    cout<<"非范围内数字";
return 0;}
