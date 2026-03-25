#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m; cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = i*m+1; j <= (i+1)*m; j++) {
            if(j != (i+1)*m) cout << j << ' ';
            else cout << j;
        }
        cout << '\n';
    }
    return 0;
}