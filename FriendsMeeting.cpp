#include<bits/stdc++.h>
using namespace std;

int main(){
    int z, b, n, t, a;
    cin>>z>>b;
    n = abs(z-b);
    a=n/2;
    t = (n%2==0)?a*(a+1):a*(a+1)+a+1;

    cout<<t;
}
