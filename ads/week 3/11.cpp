#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    long long m;
    cin>>n>>m;
    vector<long long> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    long long sum=0;
    int left =0;
    int ans=n+1;
    for(int i=0;i<n;i++){
        sum+=v[i];
        while (sum>=m){
            ans=min(ans,i-left+1);
            sum-=v[left++];
        }
    }
    cout<<ans<<"\n";
}