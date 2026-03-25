#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,k,p,x; cin >> n >> k >> p; // k개씩 n번
    int cnt=0, ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k; j++) {
            cin >> x;
            if(x==0) cnt++;
        }
        if(cnt < p) ans++;
        cnt = 0;
    }
    cout << ans;
    return 0;
}