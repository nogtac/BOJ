#include <iostream>
using namespace std;

int main() {  
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    pair<int,int> x1,x2,y1,y2;
    x1.second = 0;
    x2.second = 0;
    y1.second = 0;
    y2.second = 0;
    
    cin >> x1.first >> y1.first;
    x1.second++;
    y1.second++;

    for(int i = 0; i < 2; i++) {
        int x,y; cin >> x >> y;

        if(x == x1.first)
            x1.second++;
        else {
            x2.first = x;
            x2.second++;
        }

        if(y == y1.first)
            y1.second++;
        else {
            y2.first = y;
            y2.second++;
        }
    }

    if(x1.second < x2.second)
        cout << x1.first << ' ';
    else   
        cout << x2.first << ' ';
    
    if(y1.second < y2.second)
        cout << y1.first;
    else 
        cout << y2.first;
    return 0;
}