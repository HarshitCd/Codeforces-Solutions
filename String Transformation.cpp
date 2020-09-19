#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    char c = 'a';
    cin>>s;
    int n = s.size(), j;
    for(int i=0; i<n; i++){
        if(s[i]<=c){
            s[i]=c;
            c++;
        }
        if('z'<c) break;
    }
    if('z'<c) cout<<s;
    else cout<<-1;
    return 0;
}
