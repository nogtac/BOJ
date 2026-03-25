#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    
    for(int i = 0; i < n; i++) {
        stack<char> s;
        string ps; cin >> ps;
        if(ps[0] == ')') {
            cout << "NO\n";
        }
        else {
            for(int j = 0; j < ps.length(); j++) {
                char l = 'a';
                if(!s.empty()) l = s.top();
                s.push(ps[j]);
                if(s.size() > 1 && l == '(' && s.top() == ')') {
                    s.pop();
                    s.pop();
                }
            }
            if(!s.empty()) cout << "NO\n";
            else cout << "YES\n";
        }
    }
    return 0;
}