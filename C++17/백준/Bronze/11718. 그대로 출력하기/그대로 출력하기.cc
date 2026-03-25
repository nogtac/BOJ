#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    for(;;) {
        if(cin.eof()) break;
        string s;
        getline(cin, s);
        cout << s << '\n';
    }
    return 0;
}