#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin>>s1>>s2;
    int n=0, j=s2.size()-1, i=s1.size()-1;
    //cout<<s1[i]<<" "<<s2[j]<<endl;
    while(i>=0 && j>=0){
        if(s1[i]!=s2[j]) break;
        else{--i; --j;}
    }
    //cout<<i<<" "<<j<<endl;
    if(j==-1) cout<<i+1;
    else if(i==-1) cout<<j+1;
    else cout<<i+j+2;
    return 0;
}
