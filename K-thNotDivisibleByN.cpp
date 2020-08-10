#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, a, b, c;
    cin>>n>>k;
    a=k/n;
    b=k-a*(n-1)  ;
    c=a*n+b+b/n;
    c+=(c%n==0)?1:0;
    cout<<c<<" "<<a<<" "<<b<<endl;
    return 0;

}
