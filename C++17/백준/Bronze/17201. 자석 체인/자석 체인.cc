#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n; 
    string s;
    bool flag = false;
    cin >> n >> s;
    for(int i = 1; i <= 2*n; i++) {
        if(i % 2 == 0) {
            if(s[i-1] == s[i]) {
                cout << "No";
                flag = true;
                break;
            }
        }
    }
    if(!flag) cout << "Yes";
    return 0;
}