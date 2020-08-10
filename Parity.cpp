#include<bits/stdc++.h>
using namespace std;

int main(){
    int b, k;
    cin>>b>>k;
    int n=k;
    vector<int>v(k);
    for(int i=0; i<k; i++) cin>>v[i];
    b=b%2;
    k=v[n-1];
    for(int i=0; i<n-1; i++) k+=v[i]*b;
    if(k%2==0) cout<<"even";
    else cout<<"odd";
    return 0;
}
