#include <iostream>
using namespace std;
int main() {
    int n = 40;
    long long fib[n];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < n; i++) {
        fib[i]=fib[i-1]+fib[i-2];
    }
    for (int i = 0; i < n; i++) {
        cout << fib[i] << "\t";
        if ((i + 1) % 5 == 0) {
            cout << endl;
        }
    }

    return 0;
}
