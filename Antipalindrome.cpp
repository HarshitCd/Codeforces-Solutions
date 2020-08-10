#include<bits/stdc++.h>
using namespace std;
/*
int antiPalin(string &s, int i, int n){
    int s1=0, s2=0, k=0;
    while(i-k>=0 && i+k<n){
        if(s[i-k]!=s[i+k]) s1=2*k+1;
        k++;
    }
    k=i+1;
    while(i>=0 && k<n){
        if(s[i]!=s[k]) s2=k-i+1;
        i--;
        k++;
    }
    return max(s1, s2);
}

int main(){
    int n, ans=0;
    string s;
    cin>>s;
    n=s.length();
    for(int i=0; i<n; i++){
        ans = max(ans, antiPalin(s, i, n));
    }
    cout<<ans;
    return 0;
}
*/

int main(){
    int n, a=0;
    string s;
    cin>>s;
    n=s.length();
    for(int i=1; i<n; i++){
        if(s[i]==s[i-1])a++;
    }
    if(a==n-1) cout<<0;
    else{
        a=0;
        for(int i=0; i<n/2; i++){
            if(s[i]==s[n-i-1]) a++;
        }
        if(a==n/2) cout<<n-1;
        else cout<<n;
    }
    return 0;
}
