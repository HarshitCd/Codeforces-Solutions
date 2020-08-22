#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, sum=0, j=0, ans=0;
    string s;
    cin>>n>>s;
    if(n%2) cout<<-1;
    else{
        for(int i=0; i<n; i++){
            if(s[i]==')') sum-=1;
            else sum+=1;
            if(sum<0) j++;
            else{
                if(j!=0) j++;
                ans+=j;
                j=0;
            }
            //cout<<j<<" ";
        }
        if(sum==0) cout<<ans;
        else cout<<-1;
    }
    return 0;
}
