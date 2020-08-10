#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a, b, s;
    cin>>a>>b>>s;
    if(abs(a)+abs(b)<=s && (abs(a)+abs(b))%2==s%2) cout<<"Yes";
    else cout<<"No";
    return 0;
}
