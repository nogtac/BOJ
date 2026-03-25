#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin >> n;

    for(int i = 1; i <= n; i++) { // i는 줄
        int flag = i+n-1-2*(i-1);
        for(int j = 1; j <= i+n-1; j++) {
            if(j == flag) {
                cout << "*";
                flag += 2;
            }
            else cout << " ";
        }
        cout << "\n";
    }
    return 0;
}