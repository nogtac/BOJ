#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0)->ios::sync_with_stdio(false);
	
	int n; cin >> n;
	string s;
	bool flag = false;
	for(int i = 0; i < n; i++) {
		cin >> s;
		if(s == "anj") {
			cout << "뭐야;";
			flag = true;
		}
	}
	if(!flag) cout << "뭐야?";
	
	return 0;
}