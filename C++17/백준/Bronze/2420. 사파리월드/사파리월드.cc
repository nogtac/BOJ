#include <iostream>

using namespace std;

int main() {  
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    unsigned long long n, m; cin >> n >> m;
    cout << llabs(n-m);
    return 0;
}