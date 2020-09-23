#include<bits/stdc++.h>
using namespace std;

int main(){
    long long m, b, x, y, mx=0, a;
    cin>>m>>b;

    for(y=0; y<=b; y++){
        x = m*(b-y);
        a = (x+1)*(y+1)*(x+y);
        if(a%2==0) a/=2;
        else continue;
        if(mx<=a) mx=a;
        else break;
    }
    cout<<mx;
    return 0;
}
