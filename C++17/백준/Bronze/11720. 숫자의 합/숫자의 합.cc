#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0)->ios::sync_with_stdio(false);
	
	string s;
	int n, ans = 0;
	
	cin >> n >> s;

	for(int i = 0; i < n; i++) {
		ans += s[i] - 48;
	}
	cout << ans;
	return 0;
}