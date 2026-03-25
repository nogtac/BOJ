#include <iostream>
#include <cstring>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string s;
    int cnt = 0, n; cin >> n;

    for(int i = 0;;i++) {
        s = to_string(i);
        if(s.find("666") != string::npos) {
            cnt++;
        }
        if(cnt == n) {
            cout << s;
            break;
        }
    }

    return 0;
}