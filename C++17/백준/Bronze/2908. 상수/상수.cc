#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int a,b; cin >> a >> b;
    int x,y,z;
    x = a/100; 
    y = (a-x*100)/10; 
    z = a-x*100-y*10;
    a -= x*100 + z; 
    a += z*100 + x;

    x = b/100; 
    y = (b-x*100)/10; 
    z = b-x*100-y*10;
    b -= x*100 + z; 
    b += z*100 + x;

    if(a>b) cout << a;
    else cout << b;
    return 0;
}