#include <iostream>
#include <queue>
using namespace std;

int main() {  
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k; cin >> n >> k;
    queue<int> q;

    for(int i = 1; i <= n; i++) q.push(i);

    cout << "<";
    while(!q.empty()) {
        for(int i = 0; i < k-1; i++) {
            int x = q.front();
            q.push(x);
            q.pop();
        }
        
        cout << q.front();
        if(q.size() != 1) 
            cout << ", ";
        q.pop();

    }
    cout << ">";
    return 0;
}