#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    vector<int> v(26);
    cin>>n>>s;
    for(char x: s) v[x-'a']++;

    for(int i=0; i<26; i++){
        while(v[i]){
            cout<<(char)('a'+i);
            v[i]--;
        }
    }
    return 0;
}
