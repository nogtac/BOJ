#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0)->ios::sync_with_stdio(false);

	int arr[100], n, v, ans = 0; cin >> n;
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	cin >> v;
	for(int i = 0; i < n; i++) {
		if(arr[i] == v)
			ans++;
	}
	cout << ans;
	return 0;
}