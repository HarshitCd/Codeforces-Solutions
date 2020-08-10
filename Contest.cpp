#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d, v, m;
    cin>>a>>b>>c>>d;
    m = max(3*a/10, a-a*c/250);
    v = max(3*b/10, b-b*d/250);
    if(v>m) cout<<"Vasya";
    else if(v<m) cout<<"Misha";
    else cout<<"Tie";
    return 0;
}
