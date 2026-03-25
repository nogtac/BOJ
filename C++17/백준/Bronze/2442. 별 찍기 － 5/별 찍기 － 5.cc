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
        if(i != 2*n-1)
            cout << endl;
        tmp++;
    }
    return 0;
}