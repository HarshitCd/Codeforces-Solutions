#include<bits/stdc++.h>
using namespace std;

int main(){
    int x[2], y[2], a, b;
    cin>>x[0]>>y[0]>>x[1]>>y[1]>>a>>b;

    if((x[0]-x[1])%a==0 && (y[1]-y[0])%b==0 && (abs(x[0]-x[1])/a)%2==(abs(y[0]-y[1])/b)%2) cout<<"YES";
    else cout<<"NO";

    return 0;
}
