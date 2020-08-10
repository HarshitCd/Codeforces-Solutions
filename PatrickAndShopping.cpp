#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    int mi=(a<b)?a:b, ma = a+b-mi,x,y,z;

    x = mi+2*ma;
    y = c+ma;
    z = 2*c+mi;

    cout<<mi+min(min(x, y), z)<<endl;
    return 0;

}
