#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, j=0, c=0;
    string s;
    cin>>n>>s;
    for(int i=1; s[i]!='\0'; i++){
        if(s[j]==s[i]) c++;
        else j=i;
    }
    cout<<c;
    return 0;
}
