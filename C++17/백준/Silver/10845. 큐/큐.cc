#include <iostream>
#include <string>

using namespace std;

struct queue {
    int data[10000];
    int begin = 0;
    int end = 0;

    void push(int x) {
        data[end++] = x;
    }

    int pop() {
        if(empty()) return -1;
        else return data[begin++];
    }

    int size() {
        return end - begin;
    }

    int empty() {
        return end == begin ? 1 : 0;
    }

    int front() {
        if(empty()) return -1;
        else return data[begin];
    }

    int back() {
        if(empty()) return -1;
        else return data[end - 1];
    }
};

int main() {  
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    queue q;

    while(n--) {
        string s; cin >> s;
        
        if(s == "push") {
            int x; cin >> x;
            q.push(x);
        }
        else if(s == "pop")
            cout << q.pop() << '\n';
        else if(s == "size")
            cout << q.size() << '\n';
        else if(s == "empty")
            cout << q.empty() << '\n';
        else if(s == "front") 
            cout << q.front() << '\n';
        else if(s == "back")
            cout << q.back() << '\n';
    }
    return 0;
}