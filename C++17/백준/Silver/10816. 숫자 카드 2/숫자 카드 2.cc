#include <iostream>
#include <unordered_map>
using namespace std;

int main() {  
    ios::sync_with_stdio(false);
    cin.tie(0);

    unordered_map<int, int> um;
    int n, m; cin >> n;

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        if(um.find(x) != um.end())
            um[x]++;
        else    
            um[x] = 1;
    }

    cin >> m;

    for(int i = 0; i < m; i++) {
        int x; cin >> x;
        if(um.find(x) == um.end()) 
            cout << 0 << ' ';
        else 
            cout << um[x] << ' ';
    }
    return 0;
}