#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t, a;
    cin>>t;
    while(t--){
        cin>>n;
        int j=0, k=0;
        string s(n, '0');
        s[0]='1';
        s[n-1]='1';
        vector<int> v(n);
        for(int i=0; i<n; i++) {
            cin>>v[i];
            if(v[i]==1) a=i;
        }
        for(int i=2; i<=n; i++){
            while(a+j<n && v[a+j]<=i) j++;
            while(a-k>=0 && v[a-k]<=i) k++;
            if(k+j-1==i) s[i-1]='1';
        }
        cout<<s<<endl;
    }
    return 0;
}
