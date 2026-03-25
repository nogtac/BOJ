#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int m,n,cnt = 1, ans = 0,x,y; cin >> m >> n; // m줄n칸
    string dir = "right";
    bool arr[m][n];
    fill(&arr[0][0], &arr[0][0] + m*n, false);

    x = 0;
    y = 0;
    arr[x][y] = true;
    while(cnt != m*n) {
        bool moved = false;
        
        if(dir == "right" && y+1 < n && !arr[x][y+1]) {
            y++;
            cnt++;
            arr[x][y] = true;
            moved = true;
        }
        else if(dir == "down" && x+1 < m && !arr[x+1][y]) {
            x++;
            cnt++;
            arr[x][y] = true;
            moved = true;
        }
        else if(dir == "left" && y-1 >= 0 && !arr[x][y-1]) {
            y--;
            cnt++;
            arr[x][y] = true;
            moved = true;
        }
        else if(dir == "up" && x-1 >= 0 && !arr[x-1][y]) {
            x--;
            cnt++;
            arr[x][y] = true;
            moved = true;
        }
        
        if(!moved) {
            if(dir == "right") dir = "down";
            else if(dir == "down") dir = "left";
            else if(dir == "left") dir = "up";
            else if(dir == "up") dir = "right";
            ans++;
        }
    }

    cout << ans;
    return 0;
}