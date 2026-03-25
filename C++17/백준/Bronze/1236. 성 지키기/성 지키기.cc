#include <iostream>
#include <algorithm>    
using namespace std;    

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m, rc = 0, cc = 0; // 행, 열 
    cin >> n >> m;
    int row[n], col[m];
    fill(row, row+n, 0);
    fill(col, col+m, 0);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            char c; cin >> c;
            if(c == 'X') {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        if(row[i] == 0) rc++;
    }
    for(int i = 0; i < m; i++) {
        if(col[i] == 0) cc++;
    }

    cout << max(rc,cc);
    
    return 0;
}