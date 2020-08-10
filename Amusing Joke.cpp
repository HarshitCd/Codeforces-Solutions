#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    map<char, int> m;
    for(int i=0; i<2; i++){
        cin>>s;
        for(int j=0; s[j]!='\0'; j++) m[s[j]]++;
    }
    cin>>s;
    for(int j=0; s[j]!='\0'; j++) m[s[j]]--;
    for(auto x: m){
        if(x.second != 0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
