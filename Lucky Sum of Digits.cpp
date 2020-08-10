#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, s=0, f=0;
    cin>>n;
    for(int i=n/7; i>=0; i--){
        if((n-i*7)%4==0){
            s=i;
            f=(n-i*7)/4;
            break;
        }
    }
    if(s==0 && f==0) cout<<-1;
    else{
        for(int i=0; i<f; i++) cout<<4;
        for(int i=0; i<s; i++) cout<<7;
    }
    return 0;
}
