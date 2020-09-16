#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, pos, l, r, a=0, b=0;
    cin>>n>>pos>>l>>r;
    if(pos<l) b=1;
    if(pos>r) a=1;

    if(l==1 && r!=n) cout<<r+1-min(r, pos)+((a)?(pos-r): 0);
    else if(l!=1 && r==n) cout<<max(pos, l)-l+1+((b)?(l-pos): 0);
    else if(l==1 && r==n) cout<<0;
    else cout<<min(r-min(r, pos)+((a)?(pos-r): 0), max(pos, l)-l+((b)?(l-pos): 0))+r-l+2;
    return 0;
}
