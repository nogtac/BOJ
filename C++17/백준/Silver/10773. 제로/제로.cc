#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, ans = 0; cin >> n;
    stack<int> s;
    
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        if(x == 0)
            s.pop();
        else 
            s.push(x);
    }
    
    if(!s.empty()) {
        while(!s.empty()) {
            ans += s.top();
            s.pop();
        }
    }
    cout << ans;
    return 0;
}