#include <iostream>
using namespace std;
int main(){
string x;
int number=0;
cout<<"请输入整数，按a结束"<<'\n';
while(true){
cin>>x;
if(x=="a"){
    break;}
int project=stoi(x);
if(project%2==0){
    number++;}
}

cout<<"偶数有"<<number<<"个";

}
