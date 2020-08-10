#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, i;
    string s;
    cin>>t;
    while(t--){
        set<char> ss;
        cin>>s;
        i=0;
        while(s[i]!='\0'){
            if(s[i+1]!='\0' && s[i]==s[i+1]){
                s[i]=s[i+1]='#';
                i+=2;
            }
            else{
                ss.insert(s[i]);
                i++;
            }
        }
        for(auto x: ss){
            cout<<x;
        }
        cout<<endl;
    }
    return 0;
}
