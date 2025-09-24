#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>b;
    for (int i=0;i<n;i++){
        int m;
        cin>>m;
        b.push_back(m);
    }
    int v;
    cin>>v;
    int left=0;
    int right=n-1;
    bool found=false;
    while (left<=right){
        int mid=(left +right)/2;
        if (b[mid]==v){
            found=true;
            break;
        }
        else if (b[mid]<v){
            left =mid+1;
        }
        else{
            right=mid-1;
        }
    }
    if(found)cout<<"Yes";
    else cout<<"No";
}