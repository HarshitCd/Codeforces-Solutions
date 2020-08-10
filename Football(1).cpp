#include<bits/stdc++.h>
using namespace std;

int main(){
    int o=0, z=0;
    string s;
    cin>>s;
    for(char x: s){
        if(x=='1'){o++; z=0;}
        else{z++; o=0;}
        if(z==7 || o==7){cout<<"YES"; return 0;}
    }
    cout<<"NO";
}
