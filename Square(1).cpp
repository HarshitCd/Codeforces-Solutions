#include<bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b){
    long long c=a, d=b;
    while(b){
        a=a%b;
        swap(a, b);
    }
    return c*(d/a);
}

int main(){
    int t;
    long long n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<lcm(n+1, 4*n)/(n+1)+1<<endl;
    }
    return 0;
}
