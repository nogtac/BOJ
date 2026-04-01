#include <iostream> 
#include <vector>
using namespace std;

int main() {  
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,k,m; cin >> n >> k >> m;
    vector<int> v;

    for(int i = 0; i < m; i++) {
        int x; cin >> x;
        v.push_back(x);
    }

    for(int i = 0; i < m-1; i++) {
        
        if(!(v[i+1] - v[i] - 1 >= k+1) && v[i+1] - v[i] > 1) {
            cout << "NO";
            return 0;
        }
    }

    if(v[m-1] == n) 
        cout << "YES";
    else if (v[m-1] < n) {
        if(n-v[m-1] >= k+1) cout << "YES";
        else cout << "NO";
    }

    return 0;
}