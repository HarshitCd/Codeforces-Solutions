#include<bits/stdc++.h>
using namespace std;

int main(){
    long long x, t, a, b, d1, d2, i, j;

    cin>>x>>t>>a>>b>>d1>>d2;


    if(x==0){cout<<"YES"; return 0;}
    if(a+b-x<0){cout<<"NO"; return 0;}

    for(i=0; i<t; i++){
        if(i*d1==a-x){
            cout<<"YES";
            return 0;
        }

        if(i*d2==b-x){
            cout<<"YES";
            return 0;
        }
    }

    for(i=0; i<t; i++){
        for(j=0; j<t; j++){
            if(i*d1+j*d2==a+b-x){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}
