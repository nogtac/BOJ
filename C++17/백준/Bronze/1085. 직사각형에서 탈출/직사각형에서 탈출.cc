#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int x,y,w,h; cin >> x >> y >> w >> h;
    int ans = min(min(abs(w-x), abs(x)), min(abs(h-y), abs(y)));
    cout << ans;
    return 0;
}