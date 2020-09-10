#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a, t;
    cin>>t;
    while(t--){
        long long ans=1, x=0, c=2;
        cin>>a;
        while(a){
            if(a&1) x++;
            a>>=1;
        }
        c = pow(c, x);
        cout<<c<<endl;
    }
    return 0;
}
