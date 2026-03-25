#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    for(int i = 0; i < t; i++) {    
        int n; cin >> n;
        vector<int> v;

        for(int j = 0; j < n; j++) {
            int m; cin >> m;
            v.push_back(m);
        }

        while(true) {
            if(v.size() == 2) break;
            vector<int> v2;
            for(int j = 0; j < v.size()/2; j++) {
                v2.push_back(v[j] + v[v.size()-1-j]);
            }

            if(n % 2 == 1) v2.push_back(v[n/2]*2);

            int k = v.size();
            for(int j = 0; j < k; j++) v.pop_back();
            
            for(int j = 0; j < v2.size(); j++) v.push_back(v2[j]);

            if(n % 2 == 0) n = n/2;
            else n = n/2 + 1;
        }

        if(v[0] > v[1]) cout << "Case #" << i+1 << ": Alice\n";
        else cout << "Case #" << i+1 << ": Bob\n";
    }
    return 0;
}