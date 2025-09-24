#include <iostream>
#include <string>
using namespace std;
string fix(string s){
    string t = "";
    for (char c : s) 
        if (c == '#'){
            if (!t.empty()) t.pop_back();
        }
        else t+=c;
    return t;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    if (fix(s1) == fix(s2)){
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }
    return 0;
}
