#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i=1, j=0;
    string s, t="";
    cin>>n>>s;
    if(n%2==0){
        t+=s[0];
        t+=s[1];
        i=2;
    }
    else{
        t+=s[0];
        i=1;
    }
    while(i<n){
        if(j%2==0)
            t=s[i]+t;
        else
            t+=s[i];
        j++;
        i++;
    }
    cout<<t;
    return 0;
}
