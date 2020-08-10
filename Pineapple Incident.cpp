#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t, s, x;
    cin>>t>>s>>x;
    if(t>x){cout<<"NO";}
    else{
        x-=t;
        if(x==0) cout<<"YES";
        else if(x>=s && (x%s==0 || x%s==1)) cout<<"YES";
        else cout<<"NO";
    }
    //cout<<x<<" "<<s;
    return 0;
}
