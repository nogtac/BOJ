#include <iostream>
using namespace std;

int main() {
	int h, m, t, dh, dm;
	cin >> h >> m >> t;

	dh = t/60; 
	dm = t%60;

	if(dm + m >= 60) {
		h += 1;
		m = dm + m - 60;
		if(h == 24)
			h = 0;
	}
	else {
		m += dm;
	}

	if(h + dh >= 24) {
		h = h + dh - 24;
	}
	else 
		h += dh;
	
	cout << h << " " << m;

	return 0;
}