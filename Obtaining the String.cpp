#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i=0, j;
    map<char, int> m1, m2;
    vector<int> v;
    string s, t;
    cin>>n>>s>>t;

    for(char x: s) m1[x]++;
    for(char x: t) m2[x]++;

    for(auto x: m1){
        if(m2[x.first]!=x.second){cout<<-1; return 0;}
    }

    for(i=0; i<n; i++){
        if(s[i]==t[i]) continue;
        else{
            j=1;
            while(i+j<n && s[i+j]!=t[i]) j++;
            while(j>0){v.push_back(i+j); swap(s[i+j], s[i+j-1]); j--;}
        }
    }
    cout<<v.size()<<endl;
    for(int x: v) cout<<x<<" ";
    return 0;
}
