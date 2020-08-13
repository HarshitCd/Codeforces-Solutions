#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t, n, r;
    cin>>t;
    while(t--){
        cin>>n>>r;
        long long s=0;
        if(n<=r){
            s=(n)*(n-1)/2;
            s++;
        }
        else{
            s=(r)*(r+1)/2;
        }
        cout<<s<<endl;
    }
    return 0;
}
