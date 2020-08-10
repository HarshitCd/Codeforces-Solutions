#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, s=0, a, ans=0, c=0;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>a;
        if(s+a<=m){
            s+=a;
            c++;
        }
        else{
            s=a;
            ans++;
            c=0;
        }
        //cout<<ans<<endl;
    }
    cout<<ans+1;
    return 0;
}
