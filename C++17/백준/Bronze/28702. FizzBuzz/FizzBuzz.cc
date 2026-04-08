#include <iostream>
#include <string>
using namespace std;

int main() {  
    ios::sync_with_stdio(false);
    cin.tie(0);

    string a,b,c; cin >> a >> b >> c;
    int x;

    if(a[0] != 'F' && a[0] != 'B') {
        x = stoi(a) + 3;
        if(x % 5 == 0 && x % 3 == 0) 
            cout << "FizzBuzz";
        else if(x % 3 == 0 && x % 5 != 0)
            cout << "Fizz";
        else if(x % 3 != 0 && x % 5 == 0)
            cout << "Buzz";
        else
            cout << x;
        return 0;
    }

    if(b[0] != 'F' && b[0] != 'B') {
        x = stoi(b) + 2;
        if(x % 5 == 0 && x % 3 == 0) 
            cout << "FizzBuzz";
        else if(x % 3 == 0 && x % 5 != 0)
            cout << "Fizz";
        else if(x % 3 != 0 && x % 5 == 0)
            cout << "Buzz";
        else
            cout << x;
        return 0;
    }

    if(c[0] != 'F' && c[0] != 'B') {
        x = stoi(c) + 1;
        if(x % 5 == 0 && x % 3 == 0) 
            cout << "FizzBuzz";
        else if(x % 3 == 0 && x % 5 != 0)
            cout << "Fizz";
        else if(x % 3 != 0 && x % 5 == 0)
            cout << "Buzz";
        else
            cout << x;
        return 0;
    }
    
    return 0;
}