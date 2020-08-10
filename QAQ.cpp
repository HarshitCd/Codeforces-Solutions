#include<bits/stdc++.h>
using namespace std;

int Number_Subsequence(string& s){
    int ans=0;
    vector<int> v(2, 0);
    for(int i=0; s[i]!='\0'; i++){
        if(s[i]=='Q'){
            v[0]+=1;
            ans+=v[1];
        }
        if(s[i]=='A') v[1] = v[0];
    }
    return ans;
}

int main(){
    string s;
    cin>>s;
    cout<<Number_Subsequence(s);
    return 0;
}
