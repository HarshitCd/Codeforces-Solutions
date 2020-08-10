#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int a1, a2, b1, b2;
        cin>>a1>>b1;
        cin>>a2>>b2;
        if(a1==a2 && a1==(b1+b2)) cout<<"Yes\n";
        else if(a1==b2 && a1==(b1+a2)) cout<<"Yes\n";
        else if(b1==a2 && b1==(a1+b2)) cout<<"Yes\n";
        else if(b1==b2 && b1==(a1+a2)) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
