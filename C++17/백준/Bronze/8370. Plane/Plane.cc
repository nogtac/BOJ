#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0)->ios::sync_with_stdio(false);
	
	int n1, n2, k1, k2; cin >> n1 >> k1 >> n2 >> k2;
	cout << n1*k1 + n2*k2;

	return 0;
}