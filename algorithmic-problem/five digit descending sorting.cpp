#include <iostream>
#include <algorithm>
using namespace std;
int main(){
int number;
cin>>number;
if(number>=10000&&number<=99999){
int sign[5];
for(int i=4;i>=0;--i){
    sign[i]=number%10;
    number/=10;}
sort(sign,sign+5,greater<int>());
for(int a=0;a<=4;a++){
    cout<<sign[a];}
}
else cout<<"ÊäÈë´íÎó";
return 0;
}
