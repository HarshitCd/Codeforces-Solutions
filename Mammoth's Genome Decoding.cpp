#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin>>n>>s;
    map<char, int> m;
    m['A']=n/4;
    m['G']=n/4;
    m['C']=n/4;
    m['T']=n/4;
    if(n%4!=0) cout<<"===";
    else{
        for(char c: s){
            if(c!='?'){
                m[c]--;
                if(m[c]<0){
                    cout<<"===";
                    return 0;
                }
            }
        }
        for(int i=0; i<n; i++){
            if(s[i]=='?'){
                if(m['A']-->0) s[i]='A';
                else if(m['C']-->0) s[i]='C';
                else if(m['G']-->0) s[i]='G';
                else s[i]='T';
            }
        }
        cout<<s;
    }
    return 0;
}
