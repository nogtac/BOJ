#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0)->ios::sync_with_stdio(false);
	
	int n, x, idx = 0; cin >> n;
	int stack[100000] = {-1};	
	string cmd;
	for(int i = 0; i < n; i++) {
		cin >> cmd;
		if(cmd == "push") {
			cin >> x;
			stack[idx] = x;
			idx++;
		}
		else if(cmd == "pop") {
			if(idx == 0) cout << -1 << '\n';
			else {
				cout << stack[idx-1] << '\n';\
				stack[idx-1] = -1;
				idx--;
			}
		}
		else if(cmd == "size") cout << idx << '\n';
		else if(cmd == "empty") {
			if(idx == 0) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		else if(cmd == "top") {
			if(idx == 0) cout << -1 << '\n';
			else cout << stack[idx-1] << '\n';
		}
		
	}
	return 0;
}