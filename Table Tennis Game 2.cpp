#include<bits/stdc++.h>
using namespace std;

int main(){
    int k, a, b;
    cin>>k>>a>>b;
    if((a%k==0 && a!=0) || (b%k==0 && b!=0) || (a>=k && b>=k)) cout<<a/k+b/k;
    else cout<<-1;

    return 0;
}
