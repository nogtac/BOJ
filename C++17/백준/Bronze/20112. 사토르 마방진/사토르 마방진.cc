#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin >> n;
    string s[n], x,y;
    for(int i = 0; i < n; i++) {
        cin >> s[i];
        x += s[i];
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            y += s[j][i];
        }
    }
    if(x == y) cout << "YES";
    else cout << "NO";

    return 0;
}