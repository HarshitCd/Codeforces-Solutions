#include<bits/stdc++.h>
using namespace std;

int main(){
    long long ans=0, n, s;
    int a=0, m=1, c=0;
    cin>>n;
    s=n;
    while(s!=0){
        c++;
        s/=10;
    }
    for(int i=0; i<c; i++){
        ans=ans+m;
        m*=10;
    }
    ans = c*(n+1)-ans;
    cout<<ans;
    return 0;
}
