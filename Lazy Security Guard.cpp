#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a = sqrt(n);
    if(a*a==n) cout<<4*a;
    else{
        if(a*(a+1) < n) cout<<4*(a+1);
        else cout<<2*(a+a+1);
    }
    return 0;
}
