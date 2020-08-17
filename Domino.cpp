#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, su=0, sd=0, ou=0, od=0, c=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        if((a%2==1 && b%2==0) || (b%2==1 && a%2==0)) c++;
        sd+=b; su+=a;
    }

    if(sd%2!=su%2) cout<<-1;
    else{
        if(sd%2==su%2 && sd%2==0) cout<<0;
        else{
            if(c==0) cout<<-1;
            else cout<<1;
        }
    }
    return 0;
}
