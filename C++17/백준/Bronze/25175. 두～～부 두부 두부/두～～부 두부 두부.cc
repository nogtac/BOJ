#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, k; cin >> n >> m >> k;
    int arr[n];
    for(int i = 0; i <= m-2; i++) { // 1번부터 m-1번
        arr[i] = 3-(m-1-i);
    }
    for(int i = m-1; i < n; i++) { // m번부터 끝까지
        arr[i] = 3+(i-m+1);
    }
    for(int i = 0; i < n; i++) {
        int p = arr[i]-k;
        if(p % n == 0) {
            cout << i+1;
            break;
        }
    }
    return 0;
}