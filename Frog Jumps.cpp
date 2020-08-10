#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    string s;
    cin>>t;
    while(t--){
        int n, j=0, m=-1;
        cin>>s;
        s = "R"+s+"R";
        n=s.size();
        for(int i=1; i<n; i++){
            if(s[i]=='R'){m = max(i-j, m); j=i;}
        }
        cout<<m<<endl;
    }
    return 0;
}
