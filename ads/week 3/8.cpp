#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<long long>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<long long>end(n);
    end[0]=v[0];
    for(int i=1;i<n;i++){
        end[i]=end[i-1]+v[i];
    }
    while(m--){
        long long l;
        cin>>l;
        int b=lower_bound(end.begin(),end.end(),l)-end.begin();
        cout<<(b+1)<<"\n";
    }
}