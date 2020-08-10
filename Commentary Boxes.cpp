#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, m, a, b;
    cin>>n>>m>>a>>b;
    long long c = n%m;
    cout<<min((m-c)*a, c*b);
    return 0;
}
