#include <iostream> 
using namespace std;


int main() {  
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int max = 0, n, idx;
    for(int i = 0; i < 15; i++) {
        cin >> n;
        if(n > max) {
            max = n;
            idx = i;
        }
    }

    if(idx == 14) cout << max;
    else {
        cout << max+1;
    }
    return 0;
}