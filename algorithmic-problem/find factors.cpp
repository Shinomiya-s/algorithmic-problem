#include <iostream>
using namespace std;
int main(){
cout<<"�������0С��1000������"<<'\n';
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
    cout<<"�Ƿ�Χ������";
return 0;}
