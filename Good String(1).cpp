#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, c=0, j;
    string s;

    cin>>n>>s;
    for(int i=0; i<n; i+=2){
        j=1;
        while(s[i]==s[i+j]){
            s[i+j]='#';
            j++;
            c++;
        }
        i=i+j-1;
    }

    if((n-c)%2==1){
        for(int i=n-1; i>=0; i--){
            if(s[i]!='#'){
                s[i]='#';
                break;
            }
        }
        c++;
        n--;
    }
    cout<<c<<endl;
    //cout<<s;
    for(int i=0; i<n; i++) if(s[i]!='#') cout<<s[i];

    return 0;
}

