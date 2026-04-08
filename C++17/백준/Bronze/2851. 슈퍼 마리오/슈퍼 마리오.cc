#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {  
    ios::sync_with_stdio(false);
    cin.tie(0);

    int sum = 0, sub = 9999999;
    int arr[10];
    vector<int> v;

    for(int i = 0; i < 10; i++) cin >> arr[i];

    for(int i = 0; i < 10; i++) {
        sum += arr[i];
        if(abs(100-sum) < sub) {
            sub = abs(100-sum);
            v.clear();
            v.push_back(sum);
        }
        else if(abs(100-sum) == sub) {
            v.push_back(sum);
        }
    }

    if(v.size() > 1) {
        sort(v.begin(), v.end());
        cout << v[v.size()-1];
    }
    else cout << v[0];
    return 0;
}