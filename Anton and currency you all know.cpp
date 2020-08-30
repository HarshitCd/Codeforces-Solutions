#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size(), i, m=n;
    for(i=0; i<n; i++){
        if((s[i]-'0')%2==0){
            m=i;
            if(s[n-1]>s[i]) break;
        }
    }
    if(m==n) cout<<-1;
    else {swap(s[m], s[n-1]); cout<<s;}
    return 0;
}
