#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1;
    string s2;
    cin>>s1>>s2;
    for(int i=0; s1[i]!='\0'; i++){
        if(s1[i]==s2[i]) s1[i]='z';
        else if(s1[i]>s2[i]) s1[i]=s2[i];
        else{
            cout<<-1;
            return 0;
        }
    }
    cout<<s1;
    return 0;
}
