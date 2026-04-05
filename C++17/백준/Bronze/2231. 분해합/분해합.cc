#include <iostream>
#include <string>
using namespace std;

int main() {  
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    
    for(int i = 1; i <= n; i++) {
        string s = to_string(i);
        int sum = stoi(s);

        for(int j = 0; j < s.size(); j++) {
            sum += s[j] - 48;
        }

        if(sum == n) {
            cout << i;
            return 0;
        }
    }

    cout << 0;

    return 0;
}