#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int n, ans = 0;
    cin>>s>>n;
    int m = s.size();
    for(int i=m-1; i>=0 && n!=0; i--){
        if(s[i]=='0') n--;
        else ans++;
    }
    if(n==0) cout<<ans;
    else cout<<m-1;

    return 0;
}
