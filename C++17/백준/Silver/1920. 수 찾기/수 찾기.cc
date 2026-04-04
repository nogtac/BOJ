#include <iostream>
#include <unordered_set>

using namespace std;

int main() {  
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    unordered_set<int> s;

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        s.insert(x);
    }

    cin >> n;

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        cout << (s.count(x) ? 1 : 0) << '\n';
    }
    return 0;
}