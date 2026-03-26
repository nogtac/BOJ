#include <iostream>
#include <queue>
using namespace std;

int main() {  
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, max = 0, min = 99999999; cin >> n;
    queue<int> q;

    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        if(a == 1) {
            int x; cin >> x;
            q.push(x);
            if(q.size() >= max)  {
                if(q.size() == max && q.back() < min) min = q.back();
                else if(q.size() > max) {
                    max = q.size(); 
                    min = q.back();
                }
            }
        }
        else {
            q.pop();
        }
    }

    cout << max << ' ' << min;

    return 0;
}