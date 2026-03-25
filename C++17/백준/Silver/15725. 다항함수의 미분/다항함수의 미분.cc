#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int idx = -1 ;
    string s; cin >> s;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'x') {
            idx = i;
            break;
        }
    }
    if(idx == -1) {
        cout << 0;
        return 0;
    }
    if(idx == 0) {
        cout << 1;
    }
    else {
        if(s[idx-1] == '+') cout << 1;
        else if(s[idx-1] == '-') cout << -1;
        else {
            for(int i = 0; i < idx; i++) {
            cout << s[i];
            }
        }
    }
    return 0;
}