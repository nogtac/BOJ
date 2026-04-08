#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

int main() {  
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s; cin >> s;
    
    if(s[0] == 'F') cout << "Foundation";
    if(s[0] == 'C') cout << "Claves";
    if(s[0] == 'V') cout << "Veritas";
    if(s[0] == 'E') cout << "Exploration";

    return 0;
}