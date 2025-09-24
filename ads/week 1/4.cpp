#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stack<char> k;
    for (char c : s){
        if (!k.empty() && k.top() == c){
            k.top();
        }
        else {
            k.push(c);
        }
    }
    if (k.empty()){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    return 0;
}