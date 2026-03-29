#include <iostream>
#include <queue>
using namespace std;

int main() {  
    ios::sync_with_stdio(false);
    cin.tie(0);

    int h,w,t, ans, n; cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> h >> w >>  n;

        if(n % h == 0) {
            ans = h*100+(n/h);
        }
        else ans = (n%h) * 100 + (n/h) + 1;

        cout << ans << '\n';
    }
    return 0;
} 