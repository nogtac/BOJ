#include <iostream>
#include <algorithm>    
using namespace std;    

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin >> n;
    pair<int, int> p[n];
    for(int i = 0; i < n; i++) {
        p[i].first = i+1;
        p[i].second = i+1;
    }
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        int tmp = p[i].second;
        p[i].second -= x;
        if(x!=0) {
            for(int j = 0; j < n; j++) {
                if(j != i && p[j].second >= tmp - x && p[j].second <= tmp-1) {
                    p[j].second += 1;
                } 
            }
        }
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < n; j++) {
            if(p[j].second == i) cout << p[j].first << ' ';
        }
    }

    return 0;
}