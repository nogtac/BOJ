#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isinbound(int x, int y) {
    return x >= 0 && x < 8 && y >= 0 && y < 8;
}

int main() {  
    ios::sync_with_stdio(false);
    cin.tie(0);

    string king_pos, stone_pos;
    int n, kx, ky, sx, sy;
    cin >> king_pos >> stone_pos >> n;
    kx = king_pos[0] - 'A';
    ky = king_pos[1] - '0' - 1;
    sx = stone_pos[0] - 'A';
    sy = stone_pos[1] - '0' - 1;

    for(int i = 0; i < n; i++) {
        string s; cin >> s;
        if(s == "R" && isinbound(kx+1, ky)) {
            if(kx+1 == sx && ky == sy) {
                if(isinbound(sx+1, sy)) {
                    kx++;
                    sx++;
                }
            }
            else kx++;
        }
        if(s == "L" && isinbound(kx-1, ky)) {
            if(kx-1 == sx && ky == sy) {
                if(isinbound(sx-1, sy)) {
                    kx--;
                    sx--;
                }
            }
            else kx--;
        }
        if(s == "B" && isinbound(kx, ky-1)) {
            if(kx == sx && ky-1 == sy) {
                if(isinbound(sx,sy-1)) {
                    ky--;
                    sy--;
                }
            }
            else ky--;
        }
        if(s == "T" && isinbound(kx, ky+1)) {
            if(kx == sx && ky+1 == sy) {
                if(isinbound(sx, sy+1)) {
                    ky++;
                    sy++;
                }
            }
            else ky++;
        }
        if(s == "RT" && isinbound(kx+1, ky+1)) {
            if(kx+1 == sx && ky+1 == sy) {
                if(isinbound(sx+1, sy+1)) {
                    kx++;
                    ky++;
                    sx++;
                    sy++;
                }
            }
            else {
                kx++;
                ky++;
            }
        }
        if(s == "LT" && isinbound(kx-1, ky+1)) {
            if(kx-1 == sx && ky+1 == sy) {
                if(isinbound(sx-1, sy+1)) {
                    kx--;
                    ky++;
                    sx--;
                    sy++;
                }
            }
            else {
                kx--;
                ky++;
            }
        }
        if(s == "RB" && isinbound(kx+1, ky-1)) {
            if(kx+1 == sx && ky-1 == sy) {
                if(isinbound(sx+1, sy-1)) {
                    kx++;
                    ky--;
                    sx++;
                    sy--;
                }
            }
            else {
                kx++;
                ky--;
            }
        }
        if(s == "LB" && isinbound(kx-1,ky-1)) {
            if(kx-1 == sx && ky-1 == sy) {
                if(isinbound(sx-1,sy-1)) {
                    kx--;
                    ky--;
                    sx--;
                    sy--;
                }
            }
            else {
                kx--;
                ky--;
            }
        }
    }
    
    cout << (char)(kx + 'A') << (char)(ky + '0' + 1) << '\n' << (char)(sx + 'A') << (char)(sy + '0' + 1);

    
    return 0;
}