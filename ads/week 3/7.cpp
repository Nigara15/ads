#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    long long k;
    cin >> n >> k;
    vector<long long> a(n);
    for (auto &x : a) cin >> x;
    long long l = 1, r = *max_element(a.begin(), a.end());
    long long ans = r;
    while (l <= r) {
        long long m = (l + r) / 2;
        long long flights = 0;
        for (long long x : a) {
            flights += (x + m - 1) / m; 
            if (flights > k) break;    
        }
        if (flights <= k) {
            ans = m;     
            r = m - 1; 
        } else {
            l = m + 1;  
        }
    }
    cout << ans << "\n";
    return 0;
}