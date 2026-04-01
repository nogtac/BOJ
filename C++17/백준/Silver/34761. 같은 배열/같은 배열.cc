#include <iostream> 
#include <vector>
using namespace std;


int main() {  
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vector<int> a;
    vector<int> b;
    bool an[n], bn[n];
    fill(an, an+n, false);
    fill(bn, bn+n, false);

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        a.push_back(x);
        an[x-1] = true;
    }
    for(int i = 0; i < 2*n; i++) {
        int x; cin >> x;
        b.push_back(x);
        bn[x-1] = true;
    }

    for(int i = 0; i < n; i++) {
        if(a[i] != b[i]) {
            cout << "NO";
            return 0;
        }
    }

    for(int i = 0; i < n; i++) {
        if(bn[i] == true && an[i] == false) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}