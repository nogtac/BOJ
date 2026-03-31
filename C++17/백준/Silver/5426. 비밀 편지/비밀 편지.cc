#include <iostream>
#include <cmath>
using namespace std;


int main() {  
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        string s; cin >> s;
        int x = sqrt(s.length()), cnt = 0;
        char arr[x][x];

        for(int j = 0; j < x; j++) {
            for(int k = 0; k < x; k++) {
                arr[j][k] = s[cnt];
                cnt++;
            }
        }

        int idx = x-1;
        for(int j = 0; j < x; j++) {
            for(int k = 0; k < x; k++) {
                cout << arr[k][idx];
            }
            idx--;
        }

        cout << '\n';
    }
    
    return 0;
}