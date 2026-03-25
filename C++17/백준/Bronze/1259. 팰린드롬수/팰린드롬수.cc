#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string s;
    int ans = 0;
    while(true) {
        cin >> s;
        if(s == "0") break;
        bool flag = false;
        for(int i = 0; i < s.size()/2; i++) {
            if(s[i] != s[s.size()-1-i]) {
                flag = true;
                break;
            }
        }
        
        if(!flag) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}