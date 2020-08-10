#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        if(n<3) cout<<0<<endl;
        else{
            if(n%2==0) cout<<n/2-1;
            else cout<<n/2;
            cout<<endl;
        }

    }
    return 0;
}
