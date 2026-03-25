#include <iostream>
using namespace std;

int main() {
	int n = 1, x;
	cin >> x;
	n += (x-4)/4;
	for(int i = 0; i < n; i++) {
		cout << "long ";
	}
	cout << "int";
	
	return 0;
}