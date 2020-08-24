#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, a, b, p;
    string s;
    cin>>t;
    while(t--){
        int k, sum=0;
        cin>>a>>b>>p>>s;
        s='.'+s;
        n=s.size();
        k=n-1;
        for(int i=n-3; i>=0; i--){
            if(s[i]!=s[i+1]){
                if(s[i+1]=='A') sum+=a;
                else if(s[i+1]=='B') sum+=b;
                if(sum>p) break;
                k=i+1;
                //cout<<i<<" "<<i+1<<"-";
            }
        }
        cout<<k<<endl;
    }
    return 0;
}
