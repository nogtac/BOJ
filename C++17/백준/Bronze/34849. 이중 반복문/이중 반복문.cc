#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0)->ios::sync_with_stdio(false);
	
	int n; cin >> n;
	if(n <=10000)
		cout << "Accepted";
	else
		cout << "Time limit exceeded";
	return 0;
}