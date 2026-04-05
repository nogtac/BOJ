#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(int a, int b) {
    return a > b;
}

int main() {  
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, ans, sub=99999999; cin >> n >> m;
    vector<int> v(n);
    
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                int tmp = v[i] + v[j] + v[k];

                if(m>=tmp && m - tmp < sub) {
                    sub = m - tmp;
                    ans = tmp;
                }
            }
        }
    }

    cout << ans;


    return 0;
}