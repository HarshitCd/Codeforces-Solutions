#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, s, t, test;
    cin>>test;
    for(int i=0; i<test; i++){
        cin>>n>>s>>t;
        cout<<n+1-min(s, t)<<endl;
    }
    return 0;
}
