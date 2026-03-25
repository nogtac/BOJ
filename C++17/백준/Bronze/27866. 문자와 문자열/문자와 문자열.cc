#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0)->ios::sync_with_stdio(false);
	
	string s;
	int i;
	cin >> s >> i;
	cout << s[i-1];
	return 0;
}