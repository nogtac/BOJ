#include <iostream>
#include <vector>
using namespace std;

int main() {  
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vector<pair<int,int>> v;
    vector<int> ans(n);

    for(int i = 0; i < n; i++) {
        int w,h; cin >> w >> h;
        v.push_back({w,h});
    }

    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(v[i].first < v[j].first && v[i].second < v[j].second) ans[i]++;
            else if(v[i].first > v[j].first && v[i].second > v[j].second) ans[j]++;
        }
    }

    for(auto& i : ans) {
        cout << i+1 << ' ';
    }
    return 0;
}