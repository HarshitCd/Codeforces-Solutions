#include<bits/stdc++.h>
using namespace std;

long long factorial(int n){
    long long a=1;
    if(n==0 || n==1) return 1;
    for(int i=2; i<=n; i++) a*=i;
    return a;
}

int main(){
    int n;
    string s;
    int a=0;
    map<char, int> m;
    cin>>n>>s;
    for(int i=0; i<n; i++){
        m[s[i]]++;
    }
    a=n/11;
    if(m['8']>=a) cout<<a;
    else cout<<m['8'];
    return 0;
}
