#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
int main() {
    int n, k;
    if (!(cin >> n >> k)) return 0;
    vector<ll> need;
    need.reserve(n);
    for (int i = 0; i < n; ++i) {
        ll x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if (x1 >= 0 && y1 >= 0) {
            need.push_back(max(x2, y2));
        }
    }
    if ((int)need.size() < k) {
        cout << -1 << '\n';
        return 0;
    }
    sort(need.begin(), need.end());
    cout << need[k-1] << '\n';
    return 0;
}