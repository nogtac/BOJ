#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0)->ios::sync_with_stdio(false);
	
	int t; cin >> t;
	string s;
	int ans = 0, cnt = 0;
	for (int i = 0; i < t; i++) {
		cin >> s;
		for(int j = 0; j < s.size(); j++) {
			if(s[j] == 'O')
				cnt++;
			else {
				ans += cnt * (cnt + 1) / 2;
				cnt = 0;
			}
		}
		ans += cnt * (cnt + 1) / 2;
		cout << ans << '\n';
		ans = 0;
		cnt = 0;
	}

	return 0;
}