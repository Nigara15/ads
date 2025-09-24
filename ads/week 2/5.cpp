#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> r;
    string prev = "", name;
    for (int i=0;i<n;i++){
        cin>>name;
        if (i==0 || name !=prev){
            r.push_back(name);
        }
        prev=name;
    }
    cout<<"All in all: "<< r.size()<<"\n";
    cout<<"Students:\n";
    for(int i=r.size()-1;i>=0;i--){
        cout<<r[i]<<"\n";
    }
    return 0;
}