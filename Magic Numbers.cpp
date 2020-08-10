#include<bits/stdc++.h>
using namespace std;

int main(){
    int c=0;
    string s;
    cin>>s;
    if(s[0]!='1'){
        cout<<"NO";
        return 0;
    }
    for(auto x: s){
        if(x!='1' && x!='4'){
            cout<<"NO";
            return 0;
        }
        if(x=='4') c++;
        else c=0;
        if(c>2){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
