#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, ans = 0; cin >> n;
    for(int i = 1; i <= n; i++) {
        string s = to_string(i);
        for(int j = 0; j < s.length(); j++) {
            if(s[j] == '3' || s[j] == '6' || s[j] == '9') ans++;
        }
    }
    cout << ans;
    return 0;
}