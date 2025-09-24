#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque<string>dq;
    string c;
    while (cin>>c){
        if (c == "add_front"){
            string book;
            cin>>book;
            dq.push_front(book);
            cout<<"ok\n";
        }
        else if (c == "add_back"){
            string book;
            cin>>book;
            dq.push_back(book);
            cout<<"ok\n";
        }
        else if (c == "erase_front"){
            if (dq.empty()) cout<<"error\n";
            else {
                cout<<dq.front()<<"\n";
                dq.pop_front();
            }
        }
        else if (c == "erase_back"){
            if (dq.empty()) cout<<"error\n";
            else{
                cout<<dq.back()<<"\n";
                dq.pop_back();
            }
        }
        else if (c == "front"){
            if (dq.empty()) cout<<"error\n";
            else cout<< dq.front()<<"\n";
        }
        else if (c == "back"){
            if (dq.empty()) cout<<"error\n";
            else cout<<dq.back()<<"\n";
        }
        else if (c == "clear"){
            dq.clear();
            cout<<"ok\n";
        }
        else if(c == "exit"){
            cout<<"goodbye\n";
            break;
        }
    }
    return 0;
}