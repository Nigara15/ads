#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int bi=0;
    int bd=abs(arr[0]-x);
    for(int i=1;i<n;i++){
        int d =abs(arr[i]-x);
        if (d<bd){
            bd=d;
            bi=i;
        }
    }
    cout<<bi<<"\n";
}