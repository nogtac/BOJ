#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a=1,b=0,c=0;
    string s; cin >> s;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'A') swap(a,b);
        else if(s[i] == 'B') swap(b,c);
        else if(s[i] == 'C') swap(a,c);
    }

    if(a) cout << '1';
    else if(b) cout << '2';
    else if(c) cout << '3';
    return 0;
}