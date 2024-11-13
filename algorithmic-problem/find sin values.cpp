#include <iostream>
#include <cmath>
using namespace std;
double factorial(int n){
      double result=1;
for(int i=1;i<=n;i++){
    result*=i;
}  return result;
}
int main(){
double x,sinx=0;
int fenmu=1,cifang=1,j=0;
double a[100]={0};
cout<<"输入弧度制"<<'\n';
cin>>x;
for(j=0;j<100;j++,fenmu+=2){
    if(j%2==0){
    a[j]=pow(x,cifang)/factorial(fenmu);}
    else{
    a[j]=pow(-x,cifang)/factorial(fenmu);}
    sinx+=a[j];
    cifang+=2;
}   cout<<"sinx的值为："<<sinx;
}

