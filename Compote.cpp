#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    c/=4;
    b/=2;
    a=min(a, min(b, c));
    cout<<7*a;
    return 0;
}
