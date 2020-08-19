#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k;
    string s;
    cin>>t;
    while(t--){
        cin>>n>>k>>s;
        int l=-k, j=0, c=0;
        map<char, int> m;
        for(int i=0; i<n; i++){
            while(j<n && j<=i+k){m[s[j]]++; j++;}
            if(l>0) m[s[l-1]]--;
            l++;
            if(m['1']==0){s[i]='1'; c++; m['1']++;}
        }
        cout<<c<<endl;
    }
    return 0;
}
