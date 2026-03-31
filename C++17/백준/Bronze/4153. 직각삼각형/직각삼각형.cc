#include <iostream>
#include <algorithm>
using namespace std;


int main() {  
    ios::sync_with_stdio(false);
    cin.tie(0);

    for(;;) {
        int arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];
        if(arr[0]+arr[1]+arr[2] == 0) break;
        else {
            sort(arr, arr+3);
            if(arr[2]*arr[2] != arr[1]*arr[1] + arr[0]*arr[0]) {
                cout << "wrong\n";
            }
            else cout << "right\n";
        }
    }
    return 0;
}