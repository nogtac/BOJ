#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
	string s;
	int ans = 0;
	getline(cin, s);
	if(s[0] == ' ') {
		s.erase(0, 1);
	}
	if(s[s.size() - 1] == ' ' && s.size() > 0) {
		s.erase(s.size() - 1, 1);
	}
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == ' ') ans++;
	}
	if(s.empty())  {
		cout << 0;
		return 0;
	}
	if(ans == 0) cout << 1;
	else cout << ans + 1;

    return 0;
}