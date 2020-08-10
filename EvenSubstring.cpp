#include<bits/stdc++.h>
#include<string>
using namespace std;

int Even_Substring(string& s){
    int n, ans=0;
    for(int i=0; s[i]!='\0'; i++){
        n=s[i]-'0';
        ans+=(n%2==0)?i+1:0;
    }
    return ans;
}

int main(){
    int n;
    string s;
    cin>>n>>s;
    cout<<Even_Substring(s);
    return 0;
}
