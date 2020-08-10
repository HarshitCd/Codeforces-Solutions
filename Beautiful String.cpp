#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n='a'+'b'+'c', i;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        if(s[0]=='?' && s[1]!='?') s[0]=s[1]+(s[1]%'a'==0)?3:s[1]%'a';
        else if(s[0]=='?')
        for(int i=1; i<s.size()-1; i++){
            if(s[i]=='?' && s[i+1]=='?') s[i]=s[i-1]+(s[i-1]%'a'==0)?3:s[i-1]%'a';
            else if(s[i]=='?') s[i]=(char)(n-(s[i-1]+s[i+1]));
        }
        cout<<s<<endl;
    }
    return 0;
}
