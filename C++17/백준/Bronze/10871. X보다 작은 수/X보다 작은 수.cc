#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0)->ios::sync_with_stdio(false);

	int arr[10000], n, x; cin >> n >> x;
	for(int i = 0; i < n; i++)	
		cin >> arr[i];
	for(int i = 0; i < n; i++) {
		if(arr[i] < x)
			cout << arr[i] << ' ';
	}

	return 0;
}