#include <iostream>
using namespace std;

int main() {
    double sum = 0.0;
    double term = 1.0;
    int n = 0;

    while (term >= 1e-6) {
        sum += term;
        n++;
        term = 1.0;
        for (int i = 1; i <= n; ++i) {
            term /= i;
        }
    }

    cout << "e 的近似值为: " << sum << endl;
    return 0;
}




