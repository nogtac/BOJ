#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int arr[26];
    for(int i = 0; i < 26; i++) arr[i] = -1;
    string s; cin >> s;
    for(int i = 0; i < s.size(); i++) {
        int idx = s[i] - 97;
        if(arr[idx] == -1) arr[idx] = i;
    }
    for(int i = 0; i < 26; i++) cout << arr[i] << ' ';
    return 0;
}