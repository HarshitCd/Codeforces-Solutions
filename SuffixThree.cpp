#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    map<char, string> m;
    m['o'] = "FILIPINO";
    m['u'] = "JAPANESE";
    m['a'] = "KOREAN";
    for(int i=0; i<t; i++){
        string s;
        cin>>s;
        cout<<m[s[s.size()-1]]<<endl;
    }
    return 0;
}
