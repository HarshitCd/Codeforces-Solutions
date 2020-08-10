#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, n, x, t;
    cin>>t;
    while(t--){
        cin>>n>>x>>a>>b;
        x=(abs(a-b)+x)>n-1?n-1:abs(a-b)+x;
        cout<<x<<endl;
    }
    return 0;
}
