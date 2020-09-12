#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i=0, j;
    string s;
    cin>>n>>s;

    bool ok;
    int a = 0;
    int b = 1, c=0;

    for(i=0; i<n-1; i++){
        ok=true;
        a += s[i]-'0';
        j=i+1;
        b=0;
        while(j<n){
            b = s[j++]-'0';
            while(j<n && b+s[j]-'0'<=a) b += s[j++]-'0';
            if(a!=b) ok=false;
        }
        if(a!=b) ok=false;
        if(ok){
            cout<<"YES";
            return 0;
        }
    }

    cout<<"NO";
    return 0;
}
