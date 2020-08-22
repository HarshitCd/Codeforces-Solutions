#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long ans=6;
    for(int i=3; i<n; i++) ans=ans+i*(i+1);
    cout<<ans;
    return 0;
}
