#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x, y;
    cin>>n>>x>>y;
    int a = (n*y)%100==0? n*y/100-x : n*y/100+1-x;
    a = (a<0)?0:a;
    cout<<a;
    return 0;
}
