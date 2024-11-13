#include <iostream>
using namespace std;
int main(){
int project,answer=1,number=0;
for(project=10;project<=100;project++){
    answer++;
    if(answer%2==0&&answer%3==0&&answer%7==0){
        cout<<answer<<" ";
        number++;
    }
    else continue;
}
}
