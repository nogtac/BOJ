#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    for(;;) {
        int ans = 1;
        string s; cin >> s;
        if(s=="0") break;
        else {
            for(int i = 0; i < s.size(); i++) {
                if(s[i] == '1') ans+=2;
                else if(s[i] == '0') ans += 4;
                else ans+=3;

                ans++;
            }
            cout << ans << '\n';
        }
    }
    return 0;
}