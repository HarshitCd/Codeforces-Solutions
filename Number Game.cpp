#include<bits/stdc++.h>
using namespace std;

bool check(int p){
    if(p<2) return false;
    for(long long i=2; i*i<=p; i++){
        if(p%i==0) return false;
    }
    return true;
}

int main(){
    int n, t;
    cin>>t;

    while(t--){
        cin>>n;
        if(n==1) cout<<"FastestFinger";
        else if(n%2==0 && n>2){
            if((n&(n-1))==0 || check(n/2)) cout<<"FastestFinger";
            else cout<<"Ashishgup";
        }
        else cout<<"Ashishgup";
        cout<<endl;
    }
    return 0;
}

