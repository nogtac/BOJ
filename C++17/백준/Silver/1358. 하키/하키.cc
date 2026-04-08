#include <iostream>
#include <cmath>
using namespace std;

int main() {  
    ios::sync_with_stdio(false);
    cin.tie(0);

    int w,h,x,y,p,ans = 0; cin >> w >> h >> x >> y >> p;
    int r = h/2;

    for(int i = 0; i < p; i++) {
        int px, py; cin >> px >> py;
        
        if(x<=px && px<=x+w && y<=py && py<=y+h) ans++;
        else {
            double d1 = (x-px)*(x-px) + (y+r-py)*(y+r-py);
            double d2 = (x+w-px)*(x+w-px) + (y+r-py)*(y+r-py);
            if(d1 <= r*r)
                ans++;
            else if(d2 <= r*r)
                ans++;
        }
    }

    cout << ans;
    return 0;
}