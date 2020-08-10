#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a = sqrt(n);

    if(a*a==n) cout<<2*a;
    else if(a*(a+1)>=n) cout<<2*a+1;
    else cout<<2*a+2;

    return 0;
}
