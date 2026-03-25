#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,x,k; cin >> n >> x >> k;
    int arr[n];
    fill(arr, arr+n, 0);
    arr[x-1] = 1;
    for(int i = 0; i < k; i++) {
        int a,b; cin >> a >> b;
        swap(arr[a-1], arr[b-1]);
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] == 1) {
            cout << i+1;
            break;
        }
    }
    return 0;
}