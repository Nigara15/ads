#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<string>arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    k%=n;
    for(int i=k;i<n;i++) cout<<arr[i]<<" ";
    for(int i=0;i<k;i++) cout<<arr[i]<<" ";
    return 0;
}