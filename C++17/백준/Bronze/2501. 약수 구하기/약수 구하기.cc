#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k; cin >> n >> k;
    vector<int> v;
    
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) v.push_back(i);
    }

    if(v.size() < k) cout << 0;
    else cout << v[k-1];
    return 0;
}