#include<bits/stdc++.h>
#include<string>
using namespace std;

void Way_Too_Long(string& s){
    int n=s.size();
    if(n>10){
        cout<<s[0]<<n-2<<s[n-1]<<endl;
    }
    else
        cout<<s<<endl;
}

int main(){
    int t;
    string s;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>s;
        Way_Too_Long(s);
    }
    return 0;
}
