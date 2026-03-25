#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0)->ios::sync_with_stdio(false);
	
	int n, m; cin >> n >> m;
	int a, b, c;
	int arr[n] = {0};

	for(int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		for(int j = 0; j <= b-a; j++) {
			arr[a+j-1] = c;
		}
	}
	for(int  i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}

	return 0;
}