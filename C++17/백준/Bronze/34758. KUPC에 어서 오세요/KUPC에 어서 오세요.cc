#include <iostream> 
using namespace std;


int main() {  
    ios::sync_with_stdio(false);
    cin.tie(0);

    int x,y,n; cin >> x >> y >> n;

    for(int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        if(a == x || b == y) cout << 0 << '\n';
        else cout << 1 << '\n';
    }

    return 0;
}