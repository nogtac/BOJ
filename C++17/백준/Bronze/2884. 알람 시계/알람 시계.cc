#include <iostream>	
using namespace std;
	
int main() {
	int h, m, tmp;
	cin >> h >> m;
	
	if(m >= 45)
		cout << h << " " << m-45;
	else {
		m += 15;
		if(h==0) {
			h = 23;
			cout << h << " " << m;
		}
		else 
			cout << h-1 << " " << m;
	}
	return 0;
}