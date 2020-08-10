#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, a, b, c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if(b>c){
            if(a<b/2) b-=2*a;
            else b%=2;
        }
        if(b<c/2){c-=2*b; b=0;}
        else{b-=c/2; c%=2;}

        if(a<b/2) b-=2*a;
        else b%=2;

        cout<<a<<b<<c<<endl;
    }
    return 0;
}
