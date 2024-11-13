#include <iostream>
using namespace std;
int main(){
char ch;
int space=0;
int tab=0;
int newline=0;
while(true){
    cin.get(ch);
    if(ch =='q') break;
    switch(ch){
    case ' ': space++; break;
    case '\t': tab++; break;
    case '\n': newline++;break;
    }
}
cout<<"Spaces="<<space<<endl;
cout<<"Tabs="<<tab<<endl;
cout<<"Newlines="<<newline<<endl;
}
