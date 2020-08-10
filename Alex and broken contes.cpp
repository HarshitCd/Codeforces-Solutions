#include<bits/stdc++.h>
using namespace std;

int main(){
    map<char, string> m;
    m['D']="Danil";
    m['O']="Olya";
    m['S']="Slava";
    m['A']="Ann";
    m['N']="Nikita";

    string s;
    cin>>s;
    int n=s.size(), j=1, c=0;

    for(int i=0; i<n; i++){
        if(m[s[i]]!=""){
            while(i+j<n && j<m[s[i]].size() && s[i+j]==m[s[i]][j]) j++;
            if(j==m[s[i]].size()) c++;
            j=1;
        }
    }
    if(c==1) cout<<"YES";
    else cout<<"NO";
    return 0;
}
