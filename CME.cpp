#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        if(n==2) cout<<2;
        else cout<<n%2;
        cout<<endl;
    }
    return 0;
}
