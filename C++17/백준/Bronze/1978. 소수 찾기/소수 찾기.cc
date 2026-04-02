#include <iostream>
using namespace std;

int main() {  
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, ans = 0; cin >> n;
    for(int i = 0; i < n; i++) {
        bool flag = false;
        int x; cin >> x;

        for(int j = 1; j <= x; j++) {
            if(x == 1) {
                flag = true;
                break;
            }
            if(x % j == 0 && (j != 1 && j != x)) 
                flag = true;
        }

        if(!flag) ans++;
    }

    cout << ans;

    return 0;
}