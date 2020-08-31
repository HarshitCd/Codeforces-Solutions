#include<bits/stdc++.h>
using namespace std;

bool check(string s){
    vector<int> v(3);
    for(char x: s){
        if(x>='a' && x<='z') v[0]++;
        else if(x>='A' && x<='Z') v[1]++;
        else v[2]++;
    }
    return (v[0] && v[1] && v[2]);
}

int main(){
    int t, n, i;
    string s, u;
    cin>>t;
    while(t--){
        cin>>s;
        n=s.size();
        if(check(s)) cout<<s;
        else{
            for(i=0; i<n; i++){
                u=s;
                u[i]='a';
                if(check(u)){cout<<u; break;}
                u[i]='1';
                if(check(u)){cout<<u; break;}
                u[i]='A';
                if(check(u)){cout<<u; break;}
            }
            if(i==n){
                if(s[0]>='A' && s[0]<='Z'){s[1]='a'; s[2]='1';}
                else if(s[0]>='a' && s[0]<='z'){s[1]='A'; s[2]='1';}
                else{s[1]='a'; s[2]='A';}
                cout<<s;
            }
        }
        cout<<endl;
    }
    return 0;
}
