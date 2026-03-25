#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, s, c, l, ms = 0, mc, ml, ans; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s >> c >> l;
        if(s > ms) {
            ms = s;
            ans = i;
            mc = c;
            ml = l;
        }
        else if(s == ms) {
            if(mc > c) {
                ans = i;
                mc = c;
                ml = l;
            }
            else if(mc == c) {
                if(ml > l) {
                    ans = i;
                    ml = l;
                }
            }
        }
    }
    cout << ans+1;
    return 0;
}