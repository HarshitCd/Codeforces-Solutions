#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin>>t;
    while(t--){
        int m=0;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
            m = max(m, v[i]);
        }
        string s(m+1, 'a');
        cout<<s<<"\n";
        for(int i=0; i<n; i++){
            s[v[i]] ='a' + (s[v[i]]+1-'a')%26;
            cout<<s<<"\n";
        }
    }
    return 0;
}
