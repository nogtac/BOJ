#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
	int arr[42] = {0};
	int ans = 0;
	for(int i = 0; i < 10; i++) {
		int n; cin >> n;
		arr[n%42]++;
	}
	for(int i = 0; i < 42; i++) {
		if(arr[i] > 0) ans++;
	}
	cout << ans << "\n";
    return 0;
}