#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(const pair<pair<int,string>, int>& a, const pair<pair<int,string>, int>& b) {
    if(a.first.first == b.first.first) {
        return a.second < b.second;
    }
    return a.first.first < b.first.first;
}

int main() {  
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vector<pair<pair<int,string>, int>> v;

    for(int i = 0; i < n; i++) {
        int x;
        string s;
        cin >> x >> s;
        v.push_back({{x, s}, i});
    }

    sort(v.begin(), v.end(), compare);

    for(int i = 0; i < n; i++) {
        cout << v[i].first.first << ' ' << v[i].first.second << '\n';
    }
    return 0;
}