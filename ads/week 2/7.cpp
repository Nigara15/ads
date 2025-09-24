#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
void print_list(list<int>& L) {
    if (L.empty()) {
        cout << -1 << "\n";
        return;
    }
    for (auto it = L.begin(); it != L.end(); ++it) {
        if (it != L.begin()) cout << " ";
        cout << *it;
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    list<int> L;
    int cmd;
    while (cin >> cmd) {
        if (cmd == 0) break;

        if (cmd == 1) {   
            int x, p;
            cin >> x >> p;
            auto it = L.begin();
            advance(it, p);
            L.insert(it, x);

        } else if (cmd == 2) { 
            int p;
            cin >> p;
            auto it = L.begin();
            advance(it, p);
            L.erase(it);

        } else if (cmd == 3) {  
            print_list(L);

        } else if (cmd == 4) {   
            int p1, p2;
            cin >> p1 >> p2;
            auto it1 = L.begin();
            advance(it1, p1);
            int val = *it1;
            L.erase(it1);
            auto it2 = L.begin();
            advance(it2, p2);
            L.insert(it2, val);

        } else if (cmd == 5) {   
            L.reverse();

        } else if (cmd == 6) {   
            int x;
            cin >> x;
            while (x--) {
                int val = L.front();
                L.pop_front();
                L.push_back(val);
            }

        } else if (cmd == 7) {   
            int x;
            cin >> x;
            while (x--) {
                int val = L.back();
                L.pop_back();
                L.push_front(val);
            }
        }
    }
    return 0;
}