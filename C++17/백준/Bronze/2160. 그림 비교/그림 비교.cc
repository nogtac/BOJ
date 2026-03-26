#include <iostream>
#include <vector>
using namespace std;

int main() {  
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    string s[n];
    int min = 999, i1,i2;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 5; j++) {
            string r; cin >> r;
            s[i] += r;
        }
    }

    for(int i = 0; i < n-1; i++) { // n-1번까지만
        int cnt = 0;
        for(int j = i+1; j < n; j++) {
            for(int k = 0; k < 35; k++) {
                if(s[i][k] != s[j][k]) {
                    cnt++;
                }
            }
            if(cnt < min) {
                min = cnt;
                i1 = i;
                i2 = j;
            }
            cnt = 0;
        }
    }

    cout << i1+1 << ' ' << i2+1;

    return 0;
}