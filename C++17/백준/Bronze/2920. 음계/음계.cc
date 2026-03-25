#include <iostream>
using namespace std;

int main() {
    int arr[8];
    for(int i = 0; i < 8; i++) {
        cin >> arr[i];
    }
    bool asc = true, desc = true;
    for(int i = 0; i < 8; i++) {
        if(arr[i] != i + 1) asc = false;
        if(arr[i] != 8 - i) desc = false;
    }
    if(asc) cout << "ascending" << endl;
    else if(desc) cout << "descending" << endl;
    else cout << "mixed" << endl;
    return 0;
}