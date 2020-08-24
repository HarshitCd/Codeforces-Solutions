#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, m;
    cin>>n>>m;
    long long a = n, b;
    n=n-m+1;
    b = a/m;
    cout<<(a%m)*b+m*b*(b-1)/2<<" ";
    cout<<n*(n-1)/2;
    return 0;
}
