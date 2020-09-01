#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    string s, t;
    map<char, int> m;
    cin>>n>>k>>s;
    t=s;
    sort(t.begin(), t.end());
    for(int i=0; i<k; i++){m[t[i]]++;}
    for(int i=0; i<n; i++){
        if(m[s[i]]!=0){
            m[s[i]]--;
            s[i]='*';
        }
    }
    for(char x: s) if(x!='*') cout<<x;
    return 0;
}
