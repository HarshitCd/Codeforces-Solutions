#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    vector<int> v(2), u(2);
    cin>>s>>t;
    int j=0;
    for(int i=0; i<5; i++){
        if(s[i]!=':'){
            v[j]=v[j]*10+(s[i]-'0');
            u[j]=u[j]*10+(t[i]-'0');
        }
        else j++;
    }
    if(v[1]>=u[1]) v[1]=v[1]-u[1];
    else {
        v[1]=60+v[1]-u[1];
        v[0]--;
    }
    if(v[0]>=u[0]) v[0]=v[0]-u[0];
    else{
        v[0]=24+v[0]-u[0];
    }
    if(v[0]<10) cout<<"0"<<v[0]<<":";
    else cout<<v[0]<<":";
    if(v[1]<10) cout<<"0"<<v[1];
    else cout<<v[1];

    return 0;
}
