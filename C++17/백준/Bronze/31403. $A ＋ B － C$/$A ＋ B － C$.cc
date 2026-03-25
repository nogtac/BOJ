#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a,b,c; cin >> a >> b >> c;
    cout << a+b-c << '\n';
    string s = to_string(a);
    s += to_string(b);
    
    int n = stoi(s);
    cout << n-c;
    return 0;
}