#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0)->ios::sync_with_stdio(false);

	int n, a, min =  1000000, max =  -1000000; cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a;
		if(a < min)	min = a;
		if(a > max) max = a;
	}
	cout << min << ' ' << max;
	return 0;
}