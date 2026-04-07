#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

bool compare(const string& a, const string& b) {
    if(a.length() != b.length())
        return a.length() < b.length();
    return a < b;
}

int main() {  
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    map<string,bool> m;
    vector<string> v;

    for(int i = 0; i < n; i++) {
        string tmp; cin >> tmp;
        if(!m[tmp]) {
            v.push_back(tmp);
            m[tmp] = true;
        }
    }

    sort(v.begin(), v.end(), compare);

    for(auto word : v) cout << word << '\n';

    return 0;
}