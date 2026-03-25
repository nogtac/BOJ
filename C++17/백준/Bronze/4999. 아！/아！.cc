#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0)->ios::sync_with_stdio(false);
	
	string a, b; cin >> a >> b;
	int c=0, d=0;
	if(b == "h") {
		cout << "go";
		return 0;
	}

	for(int i = 0; i < a.length(); i++) {
		if(a[i] == 'a')
			c++;
	}
	for(int i = 0; i < b.length(); i++) {
		if(b[i] == 'a')
			d++;
	}

	if(c>=d) cout << "go";
	else cout << "no";

	return 0;
}