#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size(), c=0;
    for(int i=0; i<n/2; i++){
        if(s[i]!=s[n-1-i]) c++;
    }
    if(c==1 || (c==0 && n%2==1)) cout<<"YES";
    else cout<<"NO";
    return 0;
}
