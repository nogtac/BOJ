#include <iostream> 
using namespace std;


int main() {  
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, l, cnt = 0; cin >> n >> l;
    string ans;
    for(int i = 1; ; i++) {
        if(cnt == n) break;
        bool flag = false;
        string s = to_string(i);

        for(int j = 0; j < s.size(); j++) {
            if(s[j] == (char)(l + '0')) {
                flag = true;
                break;
            }
        }
        if(!flag) {
            cnt++;
            ans = s;
        }
    }

    cout << ans;

    return 0;
}