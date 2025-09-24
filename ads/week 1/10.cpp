#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque<int> dq;
    char c;
    while(cin>>c){
        if(c=='!') break;
        if(c=='+') { 
            int x;
            cin>>x;
            dq.push_front(x);
        }
        else if (c=='-'){
            int x;
            cin>>x;
            dq.push_back(x);
        }
        else if(c=='*'){
            if(dq.empty()) cout<<"error\n";
            else{
                cout<<dq.front() + dq.back()<<'\n';
                if (dq.size()==1) dq.pop_front();
                else { dq.pop_front(); dq.pop_back();
                }
            }
        }
    }
}