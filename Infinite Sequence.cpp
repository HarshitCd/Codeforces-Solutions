#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a, b, c;
    cin>>a>>b>>c;
    a = b-a;
    if(a*c<0) cout<<"NO";
    else if(a==0 && c==0) cout<<"YES";
    else if(c!=0 && a%c==0) cout<<"YES";
    else cout<<"NO";
    return 0;
}
