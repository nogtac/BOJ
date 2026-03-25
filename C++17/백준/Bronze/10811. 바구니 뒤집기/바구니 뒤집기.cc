#include <iostream>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int arr[n];
    for(int i = 0; i < n; i++) arr[i] = i + 1;
    for(int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        for(int j = 0; j < (b - a + 1) / 2; j++) {
            int temp = arr[a + j - 1];
            arr[a + j - 1] = arr[b - j - 1];
            arr[b - j - 1] = temp;
        }
    }
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}