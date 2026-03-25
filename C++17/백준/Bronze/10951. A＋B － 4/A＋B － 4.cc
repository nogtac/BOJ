#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0)->ios::sync_with_stdio(false);
	
	int a,b;
	for(;;) {
		cin >> a >> b;
		if(cin.eof())
			break;
		else
			cout << a+b << '\n';
	}
	return 0;
}