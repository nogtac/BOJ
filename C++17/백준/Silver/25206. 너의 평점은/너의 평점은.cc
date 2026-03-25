#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    double ans = 0, sum = 0;
    for(int i = 0; i < 20; i++) {
        string a,b,c; cin >> a >> b >> c; // 과목명, 학점, 등급
        double d = stod(b), e = 0; // 학점, 등급->과목평점
        if(c == "A+") e = 4.5;
        else if(c == "A0") e = 4.0;
        else if(c == "B+") e = 3.5;
        else if(c == "B0") e = 3.0;
        else if(c == "C+") e = 2.5;
        else if(c == "C0") e = 2.0;
        else if(c == "D+") e = 1.5;
        else if(c == "D0") e = 1.0;

        if(c != "P") {
            ans += d*e;
            sum += d;
        }

    }

    cout << ans / sum;
    return 0;
}