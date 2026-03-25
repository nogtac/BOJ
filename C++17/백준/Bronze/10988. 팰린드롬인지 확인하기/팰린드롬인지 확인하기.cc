#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string s; cin >> s;
    int ans = 1;
    for(int i = 0; i < s.size()/2; i++) {
        if(s[i] != s[s.size()-1-i]) {
            ans = 0;
            break;
        }
    }

    cout << ans;
    return 0;
}