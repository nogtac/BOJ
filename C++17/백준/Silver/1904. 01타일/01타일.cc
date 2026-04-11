#include <iostream>
using namespace std;

int dp[1'000'001];

int main() {  
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;

    dp[1] = 1;
    dp[2] = 2;

    for(int i = 3; i <= n; i++) {
        dp[i] = (dp[i-2] + dp[i-1]) % 15746;
    }

    cout << dp[n] << endl;

    return 0;
}