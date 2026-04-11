#include <iostream>
using namespace std;

unsigned long long factorial(int x) {
    int res = 1;
    for(int i = 2; i<=x; i++) {
        res *= i;
    }
    return res;
}

int main() {  
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k; cin >> n >> k;
    unsigned long long nf = factorial(n), kf = factorial(k), nkf = factorial(n-k);

    cout << nf/(kf*nkf);

    return 0;
}