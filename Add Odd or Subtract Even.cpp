#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int a, b;
        cin>>a>>b;
        int c = b-a;
        if(c==0) cout<<0<<endl;
        else if(c>0 && c%2==1) cout<<1<<endl;
        else if(c<0 && c%2==0) cout<<1<<endl;
        else cout<<2<<endl;
    }
    return 0;
}
