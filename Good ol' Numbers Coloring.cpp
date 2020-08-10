#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, a, b;
    cin>>t;
    while(t--){
        int tmp;
        cin>>a>>b;
        while(b){
            a=a%b;
            tmp=a;
            a=b;
            b=tmp;
        }
        if(a==1) cout<<"Finite\n";
        else cout<<"Infinite\n";
    }
    return 0;
}
