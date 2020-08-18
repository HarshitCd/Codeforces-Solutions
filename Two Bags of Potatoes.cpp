#include<bits/stdc++.h>
using namespace std;

int main(){
    int y, k, n;
    cin>>y>>k>>n;
    int m = k-y%k;
    if(m>n-y) cout<<-1;
    while(m<=n-y){
        cout<<m<<" ";
        m+=k;
    }
    return 0;
}
