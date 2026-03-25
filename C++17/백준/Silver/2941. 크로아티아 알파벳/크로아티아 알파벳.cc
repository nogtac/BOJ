#include <iostream>
using namespace std;

string s;
int ans = 0;
void func() {
    if(s[0] == 'c' || s[0] == 'd' || s[0] == 'l' || s[0] == 'n' || s[0] == 's' || s[0] == 'z') {
        if(s[0] == 'c') {
            if(s[1] == '=' || s[1] == '-') {
                ans++;
                s.erase(0, 2);
            }
            else {
                ans++;
                s.erase(0,1);
            }
        }
        else if(s[0] == 'd') { // dz= d-
            if(s[1] == '-') {
                ans++;
                s.erase(0,2);
            }
            else if(s.length() >= 3 && s[1] == 'z' && s[2] == '=') {
                ans++;
                s.erase(0,3);
            }
            else  {
                ans++;
                s.erase(0,1);
            }
        }
        else if(s[0] == 'l') {
            if(s[1] == 'j') {
                ans++;
                s.erase(0,2);
            }
            else {
                ans++;
                s.erase(0,1);
            }
        }
        else if(s[0] == 'n') {
            if(s[1] == 'j') {
                ans++;
                s.erase(0,2);
            }
            else {
                ans++;
                s.erase(0,1);
            }
        }
        else if(s[0] == 's') {
            if(s[1] == '=') {
                ans++;
                s.erase(0,2);
            }
            else {
                ans++;
                s.erase(0,1);
            }
        }
        else if(s[0] == 'z') {
            if(s[1] == '=') {
                ans++;
                s.erase(0,2);
            }
            else {
                ans++;
                s.erase(0,1);
            }
        }
    }
    else {
        ans++;
        s.erase(0,1);
    }

    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> s;
    while(s.size() >= 2) {
        func();
    }
    if(s.size() == 1) ans++;
    cout << ans;
    return 0;
}