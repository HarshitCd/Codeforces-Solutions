#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int a, b, n=s.size(), i, j, c=0, k, as=0;
    for(a=1; a<=5; a++){
        for(b=1; b<=20; b++){
            if(a*b>=n) break;
        }
        if(b!=21 && a*b>=n) break;
    }
    k = (a*b-n)%a? (a*b-n)/a+1: (a*b-n)/a;
    cout<<a<<" "<<b<<endl;
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            if(j<k && as<a*b-n){cout<<"*"; as++;}
            else if(c<n){cout<<s[c]; c++;}
        }
        cout<<endl;
    }
    return 0;
}
