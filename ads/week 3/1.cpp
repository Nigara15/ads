#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        v.push_back(m);
    }
    int a,b;
    cin>>a>>b;
    vector<vector<int>>matrix(a,vector<int>(b));
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>matrix[i][j];
        }
    }
    for(int q:v){
        bool f =true;
        for(int i=0;i<a && !f;i++){
            for(int j=0;j<b;j++){
                if (matrix[i][j]==q){
                    cout<<i<<" "<<j<<"\n";
                    f=true;
                    break;
                }
            }
        }
        if (!f){
            cout<<"-1"<<"\n";
        }
    }
}