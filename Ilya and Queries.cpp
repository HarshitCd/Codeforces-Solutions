#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int n, m, a, b;
    cin>>s>>n;
    m=s.size();
    vector<int> v(m);
    v[0]=0;
    for(int i=1; i<m; i++){
        v[i]+=v[i-1];
        v[i]+=(s[i]==s[i-1])?1:0;
    }

    for(int i=0; i<n; i++){
        cin>>a>>b;
        if(a==0) cout<<v[b-1];
        else cout<<v[b-1]-v[a-1];
        cout<<endl;
    }
    //for(int x: v) cout<<x<<" ";
    return 0;
}
