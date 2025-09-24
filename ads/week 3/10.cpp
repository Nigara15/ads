#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int l=1;
    int r=*max_element(v.begin(),v.end());
    int ans=r;
    while(l<=r){
        int p=(l+r)/2;
        long long h=0;
        for(int x:v){
            h+=(x+p-1)/p;
        }
        if (h<=m) ans=p, r=p-1;
        else l=p+1;
    }
    cout<<ans<<"\n";
}