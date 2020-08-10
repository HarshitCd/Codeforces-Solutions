#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, j=0;
    string s;
    cin>>n>>s;
    cout<<s[0];
    for(int i=1; i<n; i++){
        if(s[i]=='a' || s[i]=='e' ||  s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y'){
             if(s[i-1]=='a' || s[i-1]=='e' ||  s[i-1]=='i' || s[i-1]=='o' || s[i-1]=='u' || s[i-1]=='y')
                continue;
        }
        cout<<s[i];
    }
    return 0;
}
