#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0)->ios::sync_with_stdio(false);
	
	int a,b,c;	cin >> a >> b >> c;
	string s = to_string(a*b*c);
	int cnt[10] = {0};

	for(int  i = 0; i < s.size(); i++) {
		cnt[s[i]-'0']++;
	}
	for(int i = 0; i < 10; i++) {
		cout << cnt[i] << "\n";
	}
	return 0;
}