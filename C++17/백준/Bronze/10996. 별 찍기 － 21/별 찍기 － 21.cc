#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    if(n == 1) {
        cout << "*";
        return 0;
    }
    for(int i = 0; i < 2*n; i++) {
        if(i % 2 == 0) { // 홀수줄
            for(int j = 1; j <= n; j++) {
                if(j % 2 == 1) 
                    cout << "*";
                else if(j % 2 == 0) {
                    if(j != n) cout << " ";
                }
            }
            cout << "\n";
        }
        if(i % 2 == 1) { // 짝수줄
            for(int j = 1; j <= n; j++) {
                if(j % 2 == 0)
                    cout << "*";
                else if(j % 2 == 1) {
                    if(j != n) cout << " ";
                }
            }
            cout << "\n";
        }
    }
    return 0;
}