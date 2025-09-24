#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    vector<long long>pref(n+1,0);
    for(int i=0;i<n;i++){
        pref[i+1]=pref[i]+v[i];
    }
    int q;
    cin>>q;
    while(q--){
        long long p;
        cin>>p;
        int cnt=upper_bound(v.begin(),v.end(),p)-v.begin();
        long long sum=pref[cnt];
        cout<<cnt<<" "<<sum<<"\n";
    }
    return 0;
}