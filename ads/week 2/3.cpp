#include <iostream>
#include <list>
using namespace std;
int main(){
    int n;
    cin>>n;
    list<int> l;
    for (int i=0;i<n;i++){
        int m;
        cin>>m;
        l.push_back(m);
    }
    int p=1;;
    for (auto it = l.begin(); it !=l.end();){
        if ( p % 2 ==0) it=l.erase(it);
        else ++it;
        p++;
    }
    for (int i : l) cout<<i<<" ";
}