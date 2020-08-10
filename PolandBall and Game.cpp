#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    string s;
    cin>>n>>m;
    set<string> ss;
    for(int i=0; i<n+m; i++){
        cin>>s;
        ss.insert(s);
    }
    int c = n+m-ss.size();
    n-=c/2;
    m-=c/2;
    n+=(c%2==1)?1:0;
    if(n>m) cout<<"YES";
    else cout<<"NO";
}
