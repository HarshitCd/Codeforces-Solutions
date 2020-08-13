#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    string s;
    cin>>t;
    while(t--){
        string t="";
        vector<int> v;
        int c=1;
        cin>>s;
        s+='a';
        for(int i=1; i<s.size(); i++){
            if(s[i]==s[i-1]){c++;}
            else{
                v.push_back(c);
                t+=s[i-1];
                c=1;
            }
        }
        int f=0, n=v.size(), m=INT_MAX;
        for(int i=0; i<n-2; i++){
            if(t[i]!=t[i+1] && t[i+1]!=t[i+2] && t[i+2]!=t[i]){
                f = 1;
                m = min(m, v[i+1]+2);
            }
        }
        m = (f==0)?0:m;
        cout<<m<<endl;
    }
    return 0;
}
