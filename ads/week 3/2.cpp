#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<long long>v(n);
    long long sum=0,mx=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
        mx=max(mx,v[i])
    }
    long long left=mx;
    long long right=sum;
    long long ans=sum;
    while(left<=right){
        long long mid=(left+right)/2;
        int cnt=-1;
        long long cur=0;
        for(int i=0;i<n;i++){
            if (cur + v[i]>mid){
                if (cur+v[i]>mid){
                    cnt++;
                    cur=0;
                }
                cur+=v[i];
            }
        }
        if(cnt<=m){
            ans=mid;
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    cout<<ans<<"\n";
}