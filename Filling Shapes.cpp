#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    if(n%2==1) cout<<0;
    else{
        n = pow(2, n/2);
        cout<<n;
    }
    return 0;
}
