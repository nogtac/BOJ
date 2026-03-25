#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s; cin >> s;
    int arr[26], max = 0, idx;
    vector<int> v;
    fill(arr, arr + 26, 0);
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    for(int i = 0; i < s.size(); i++) {
        arr[s[i] - 97]++;
        if(arr[s[i] - 97] > max) {
            idx = s[i] - 97;
            max = arr[s[i] - 97];
        }
    }
    for(int i = 0; i < 26; i++) {
        if(arr[i] == max) v.push_back(i);
    }

    if(v.size() > 1) cout << "?";
    else cout << (char)toupper(idx + 'A');
    return 0;
}