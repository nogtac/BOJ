#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0)->ios::sync_with_stdio(false);
	
	int arr[30] = {0};
	int a, b;
	for(int i = 0; i < 28; i++) {
		int n; cin >> n;
		arr[n-1] = 1;
	}
	for(int i = 0; i < 30; i++) {
		if(arr[i] == 0) {
			a = i+1;
			arr[i] = 1;
			break;
		}
	}
	for(int i = 0; i < 30; i++) {
		if(arr[i] == 0) {
			b = i+1;
			break;
		}
	}
	cout << min(a,b) << "\n" << max(a,b);
	return 0;
}