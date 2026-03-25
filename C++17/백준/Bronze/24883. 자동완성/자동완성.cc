#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0)->ios::sync_with_stdio(false);
	
	char a; cin >> a;
	if(a == 'N' || a == 'n') cout << "Naver D2";
	else cout << "Naver Whale";

	return 0;
}