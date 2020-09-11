#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    long long ans=0;
    map<char, int> m1, m2;
    cin>>s>>t;
    for(char x: s) m1[x]++;
    for(char x: t) m2[x]++;

    for(auto x: m2){
        if(m1[x.first]==0){ans=0; break;}
        ans += min(m1[x.first], x.second);
    }


    ans = (ans)? ans: -1;
    cout<<ans;
    return 0;
}
