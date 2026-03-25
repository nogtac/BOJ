#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0)->ios::sync_with_stdio(false);

	int arr[9], max = 0, idx;
	for(int i = 0; i < 9; i++) {
		cin >> arr[i];	
		if(arr[i] > max) {
			idx = i;
			max = arr[i];
		}
	}
	cout << max << '\n' << idx+1;
	return 0;
}