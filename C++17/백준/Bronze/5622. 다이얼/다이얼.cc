#include <iostream>
using namespace std;

int dial(char c) {
    int ret;
    if(c == 'A' || c == 'B' || c == 'C') ret = 3;
    if(c == 'D' || c == 'E' || c == 'F') ret = 4;
    if(c == 'G' || c == 'H' || c == 'I') ret = 5;
    if(c == 'J' || c == 'K' || c == 'L') ret = 6;
    if(c == 'M' || c == 'N' || c == 'O') ret = 7;
    if(c == 'P' || c == 'Q' || c == 'R' || c == 'S') ret = 8;
    if(c == 'T' || c == 'U' || c == 'V') ret = 9;
    if(c == 'W' || c == 'X' || c == 'Y' || c == 'Z') ret = 10;
    return ret;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string s; cin >> s;
    int ans = 0;
    for(int i = 0; i < s.length(); i++) ans += dial(s[i]);
    cout << ans;
    return 0;
}