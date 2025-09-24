#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<long long>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    while(m--){
        long long l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        int cnt=0;
        for(int i=0;i<n;i++){
            long long x=v[i];
            if ((l1<=x && x<=r1) || (l2<=x && x<=r2)){
                cnt++;
            }
        }
        cout<<cnt<<"\n";
    }
}