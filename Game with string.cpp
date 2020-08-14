#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int j=0, n=s.size(), c=0;
    string t(n+1, '.');
    for(int i=0; i<n; i++){
        if(j==0) {t[++j]=s[i];}
        else if(t[j]==s[i]) {t[j]='.'; c++; j--;}
        else {t[++j]=s[i];}
    }
    //cout<<j<<" "<<c<<endl;
    if(c%2!=0) cout<<"Yes";
    else cout<<"No";
    return 0;
}
