#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        int p, m, ans = 0; cin >> p >> m;
        int arr[m];
        fill(arr,arr+m,0);
        for(int j = 0; j < p; j++) {
            int tmp; cin >> tmp;
            arr[tmp-1]++;
        }
        for(int j = 0; j < m; j++) {
            if(arr[j] != 0) {
                ans += arr[j]-1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}