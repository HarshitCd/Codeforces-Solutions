#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, l, r, i=0, j=0;
    cin>>n;
    string s(10, '0'), t;
    cin>>t;

    while(t[i]!='\0'){
        if(t[i]=='L'){
            j=0;
            while(s[j]!='0' && s[j]!='\0') j++;
            s[j] = '1';
        }
        else if(t[i]=='R'){
            j=9;
            while(s[j]!='0' && s[j]!='\0') j--;
            s[j] = '1';
        }
        else{
            s[t[i]-'0'] = '0';
        }
        i++;
    }
    cout<<s;
    return 0;
}
