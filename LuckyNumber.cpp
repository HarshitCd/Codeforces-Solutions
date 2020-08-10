#include<bits/stdc++.h>
using namespace std;

void Lucky_Number(string& s){
    int n=0;
    for(int i=0; s[i]!='\0'; i++){
        if(s[i]=='4' || s[i]=='7') n++;
    }
    (n==4 || n==7)?cout<<"YES":cout<<"NO";
}

int main(){
    string s;
    cin>>s;
    Lucky_Number(s);
    return 0;
}
