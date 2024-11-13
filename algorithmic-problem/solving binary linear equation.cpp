#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main( )
{
    float a,b,c,term1,term2,x1;
    cin>>a>>b>>c;
    if(a!=0)
    term1=(-b)/(2*a);
    term2=((b*b)-(4*a*c));
     if(term2 >=0){
     term2=(sqrt((b*b)-(4*a*c))/(2*a));
     std::cout<<"term1="<<term1+term2<<"  term2="<<term1-term2<<std::endl;}
     else
        cout<<"nothing";
    if (a==0&&b!=0){
     x1=(-c)/b;
     {std::cout<<"x1="<<x1<<std::endl;}
     }

     return 0;




}

