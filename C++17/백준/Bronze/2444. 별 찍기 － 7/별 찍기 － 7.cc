#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, tmp = 1; cin >> n;
    for(int i = 1; i <= 2*n-1; i = tmp*2-1) {
        for(int j = 0; j < (2*n-1 - i) / 2; j++) {
            cout << " ";
        }
        for(int j = 0; j < tmp*2-1; j++) {
            cout << "*";
        }
        cout << '\n';
        tmp++;
    }
    // tmp = n
    tmp -= 2;
    for(int i = tmp; i >= 1; i = tmp*2-1) {
        for(int j = 0; j < (2*n-1 - 2*tmp-1) / 2 + 1; j++) {
            cout << " ";
        }
        for(int j = 0; j < tmp*2-1; j++) {
            cout << "*";
        }
        cout << '\n';
        tmp--;
    }
    return 0;
}