#include <iostream>
using namespace std;
int main(){
int newline,space,star;
for(newline=4;newline>=0;newline--){
for(space=0;space<=newline;space++){
    cout<<" ";}
for(star=9;star>=newline*2+1;star--)
    cout<<"*";
if(newline!=0)
cout<<'\n';}

return 0;

}
