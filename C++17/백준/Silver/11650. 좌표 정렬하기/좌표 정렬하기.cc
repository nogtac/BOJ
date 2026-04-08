#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(const pair<int,int>& a, const pair<int,int>& b) {
    if(a.first == b.first)
        return a.second < b.second;
    return a.first < b.first;
}

int main() {  
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vector<pair<int,int>> v;

    for(int i = 0; i < n; i++) {
        int x,y; cin >> x >> y;
        v.push_back({x,y});
    }

    sort(v.begin(), v.end(), compare);

    for(auto& i : v) {
        cout << i.first << ' ' << i.second << '\n';
    }
    return 0;
}