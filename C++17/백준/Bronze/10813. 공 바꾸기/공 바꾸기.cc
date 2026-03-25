#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0)->ios::sync_with_stdio(false);
	
	int n, m, a, b, tmp; cin >> n >> m;
	int arr[n];

	for(int i = 0; i < n; i++) 
		arr[i] = i+1;
	
	for(int i = 0; i < m; i++) {
		cin >> a >> b;
		tmp = arr[a-1];
		arr[a-1] = arr[b-1];
		arr[b-1] = tmp;
	}

	for(int i = 0; i < n; i++) cout << arr[i] << ' ';
	return 0;
}