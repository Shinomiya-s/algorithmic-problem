#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
char a;
while(true){
cin>>a;
if(a=='#'){
    cout<<"³ÌÐò½áÊø"<<endl;
    break;
}
int b;
b=static_cast<int>(a);
b-=32;
a=static_cast<char>(b);
cout<<a;}
return 0;
}
