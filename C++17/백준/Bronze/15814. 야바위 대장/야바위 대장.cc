#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    string s; cin >> s >> n;
    for(int i = 0; i < n; i++) {
        int a,b; cin >> a >> b;
        swap(s[a], s[b]);
    }
    cout << s;
    return 0;
}