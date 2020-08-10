#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    int a, b, c, d;
    double ans=0;
    cin>>n>>k>>a>>b;
    while(n--!=1){
        cin>>c>>d;
        ans+=sqrt((a-c)*(a-c)+(b-d)*(b-d));
        a=c;
        b=d;
    }
    cout<<setprecision(10)<<k*ans/50;
    return 0;
}

