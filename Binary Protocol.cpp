#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, c=0;
    string s, t="";
    cin>>n>>s;
    for(int i=0; i<n; i++){
        if(s[i]=='1') c++;
        else{
            t+=to_string(c);
            c=0;
        }
    }
    t = t+to_string(c);
    cout<<t;
    return 0;
}
