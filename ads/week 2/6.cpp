#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m,k;
    cin>>m>>k;
    arr.insert(arr.begin()+k,m);
    for(int x:arr) cout<<x<<" ";
}
