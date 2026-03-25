#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int cnt = 1, ans = 0, n; cin >> n;
    for(;;) {
        if(n == 0) break;
        if(n < cnt) {
            cnt = 1;
            n -= cnt;
            cnt++;
            ans++;
        }
        else {
            n -= cnt;
            cnt++;
            ans++;
        }
    }
    cout << ans;
    return 0;
}