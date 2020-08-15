#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, a, b;
    cin>>n>>m>>a>>b;
    if(a<=b/m) cout<<n*a;
    else{
        int c = n/m;
        n=n-m*c;
        cout<<min(n*a+c*b, (c+1)*b);
    }
    return 0;
}
