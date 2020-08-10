#include<bits/stdc++.h>
using namespace std;

int main(){
    int s, t, n;
    int i;
    cin>>s>>t;
    for(int i=s; i<=t; i++){
        vector<int>v(10);
        n=i;
        while(n!=0 && v[n%10]!=1){
            v[n%10]++;
            n/=10;
        }
        if(n==0){cout<<i; break;}
    }
    if(n!=0) cout<<-1;
    return 0;
}
