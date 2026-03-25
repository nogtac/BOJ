#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t1, t2; cin >> t1 >> t2;
    cout << min(t1,t2);
    return 0;
}