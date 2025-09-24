#include <iostream>
using namespace std;
bool prime(int x){
    if(x<2) return false;
    for (int i=2;i*i<=x;i++){
        if (x%i==0) return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int c=0;
    int s=0;
    int num=1;
    while (true){
        num++;
        if(prime(num)){
            c++;
            if (prime(c)){
                s++;
                if(s==n){
                    cout<<num;
                    break;
                }
            }
        }
    }
}