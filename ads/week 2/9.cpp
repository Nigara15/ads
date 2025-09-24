#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int m;
        cin>>m;
        vector<int>f(26,0);
        queue<char>q;
        for(int i=0;i<m;i++){
            char ch;
            cin>>ch;
            f[ch-'a']++;
            q.push(ch);
            while(!q.empty() && f[q.front()-'a']>1){
                q.pop();
            }
            if (!q.empty()){
                cout<<q.front()<<" ";
            }
            else {
                cout<<-1<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}