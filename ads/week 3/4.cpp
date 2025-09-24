#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int count_in_range(const vector<long long> &a,long long L,long long R){
    if (L>R) return 0;
    auto left = lower_bound(a.begin(),a.end(),L);
    auto right = upper_bound(a.begin(),a.end(),R);
    return (int) (right-left);
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<long long>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    while(m--){
        long long l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        int cnt1 = count_in_range(v,l1,r1);
        int cnt2 = count_in_range(v,l2,r2);
        int inter = count_in_range(v,max(l1,l2),min(r1,r2));
        cout<<(cnt1+cnt2-inter)<<"\n";
    }
}