#include <iostream>
#include <algorithm>    
using namespace std;    

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m, max = -1, ans; cin >> n >> m; 
    int cnt[n], arr[n];
    fill(cnt, cnt+n, 0);    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < m; i++) {
        int x; cin >> x;
        for(int j = 0; j < n; j++) {
            if(x>=arr[j]) {
                cnt[j]++;
                break;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        if(cnt[i] > max) {
            max = cnt[i];
            ans = i + 1;
        }
    }
    cout << ans;
    return 0;
}