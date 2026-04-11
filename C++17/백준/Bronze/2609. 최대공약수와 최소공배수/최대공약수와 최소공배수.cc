#include <iostream>
using namespace std;

int main() {  
    ios::sync_with_stdio(false);
    cin.tie(0);
    

    int gcd,lcm, n,m; cin >> n >> m;

    for(int i = 1; i <= min(n,m); i++) {
        if(n % i == 0 && m % i == 0)    
            gcd = i;
    }

    lcm = gcd * (n/gcd) * (m/gcd);
    cout << gcd << '\n' << lcm;

    return 0;
}