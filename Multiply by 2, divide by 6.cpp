#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        int ans=0;
        if(n==1) cout<<0<<endl;
        else{
            while(n!=1){
                if(n%6==0){n/=6; ans++;}
                else if(n%3==0){n/=3; ans+=2;}
                else{ans=-1; break;}
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
