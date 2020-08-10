#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, nn=0, pn=0, zn=0, ans=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i]<0) nn++;
        else if(v[i]>0) pn++;
        else zn++;
        ans+=(v[i]!=0)?abs(v[i])-1:1;
    }
    if(nn%2==1 && zn==0) ans+=2;
    cout<<ans;
    return 0;
}
