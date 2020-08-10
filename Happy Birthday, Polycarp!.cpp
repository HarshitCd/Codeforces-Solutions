#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t;
    cin>>t;
    while(t--){
        int i=0, j=0, ans=0;
        cin>>n;
        int m=n;
        while(n/10){
            i++;
            n/=10;
        }
        ans=ans+9*(i);
        ans+=n-1;
        while((i--)+1) j=n+10*j;
        if(m>=j) ans++;
        cout<<ans<<endl;
    }
    return 0;
}
