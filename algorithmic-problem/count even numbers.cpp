#include <iostream>
using namespace std;
int main(){
string x;
int number=0;
cout<<"��������������a����"<<'\n';
while(true){
cin>>x;
if(x=="a"){
    break;}
int project=stoi(x);
if(project%2==0){
    number++;}
}

cout<<"ż����"<<number<<"��";

}
