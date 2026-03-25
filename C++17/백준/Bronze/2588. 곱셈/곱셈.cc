#include <iostream>	
using namespace std;
	
int main() {
	int a, b, c, d, e;
	cin >> a >> b;
	c = b/100;
	e = b;
	b -= c*100;
	d = b / 10;
	b -= d*10;

	cout << a*b << endl;
	cout << a*d << endl;
	cout << a*c << endl;
	cout << a*e<< endl;
	return 0;
}
