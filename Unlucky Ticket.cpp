#include<bits/stdc++.h>
#define long long ll
using namespace std;

int main(){
    int n, a=0, b=0;
    cin>>n;
    string s(n, '.'), t(n, '.');

    for(int i=0; i<n; i++) cin>>s[i];
    for(int i=0; i<n; i++) cin>>t[i];

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    for(int i=0; i<n && (a==0 || b==0); i++){
        if(s[i]-'0'<t[i]-'0') a++;
        else if(s[i]-'0'>t[i]-'0') b++;
        else{a++; b++;}
    }


    if(a==0 || b==0) cout<<"YES";
    else cout<<"NO";
    return 0;
}

