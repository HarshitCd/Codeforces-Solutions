#include<bits/stdc++.h>
using namespace std;

int main(){
    long long m, s, x;
    cin>>m>>s>>x;
    long long a = (m+s)/x;
    long long b = (m/x)+(s/x);
    cout<<a<<" ";
    if(a==b) cout<<0;
    else cout<<min((x-m%x)%x, (x-s%x)%x);
    //cout<<"\n"<<m%x<<" "<<s%x;
    return 0;

}
