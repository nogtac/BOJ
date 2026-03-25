#include <iostream>
#include <algorithm>
using namespace std;
using ull = unsigned long long;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0)->ios::sync_with_stdio(false);
	
	ull a, b; cin >> a >> b;
	ull bigger = max(a,b);
	ull smaller = min(a,b);
	if(a==b){
        cout << 0;
        return 0;
    }
	cout << bigger-smaller-1 << '\n';
	for(ull i = smaller+1; i < bigger; i++) 
	    cout << i << ' ';
	return 0;
}