#include <iostream>
#include <math.h>
using namespace std;
float a,b,c,S,s;
int main(){
cin>>a>>b>>c;
if(a+b>c&&a+c>b&&b+c>a&&abs(a-b)<c&&abs(a-c)<b&&abs(b-c)<a){
s=((a+b+c)/2);
S=(sqrt(s*(s-a)*(s-b)*(s-c)));
cout<<"S="<<S<<endl;}
else {
    cout<<"DATA ERROR!"<<endl;
}
}





