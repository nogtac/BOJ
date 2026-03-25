#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, max = 0; cin >> n;
    double arr[n], ans = 0;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] > max) max = arr[i];
    }
    for(int i = 0; i < n; i++) {
        arr[i] = arr[i]/max*100;
        ans += arr[i];
    }

    cout << ans/n;
    return 0;
}