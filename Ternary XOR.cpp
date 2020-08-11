#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    string s;
    cin>>t;
    while(t--){
        string a="", b="";
        int c=0;
        cin>>n>>s;
        for(int i=0; i<n; i++){
            if(c==0 && s[i]=='2'){
                a+='1';
                b+='1';
            }
            else if(c==1 && s[i]=='2'){
                a+='0';
                b+='2';
            }
            else if(s[i]=='0'){
                a+='0';
                b+='0';
            }
            else if(c==0 && s[i]=='1'){
                a+='1';
                b+='0';
                c++;
            }
            else if(c==1 && s[i]=='1'){
                a+='0';
                b+='1';
            }
        }
        cout<<a<<'\n'<<b<<'\n';
    }
    return 0;
}
