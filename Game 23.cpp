#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, ans=0;
    cin>>n>>m;
    if(m%n!=0){cout<<-1; return 0;}
    m/=n;
    while(m%2==0 || m%3==0){
        if(m%2==0){
            ans++;
            m/=2;
        }
        else{
            ans++;
            m/=3;
        }
    }
    if(m!=1) cout<<-1;
    else cout<<ans;
    return 0;
}
