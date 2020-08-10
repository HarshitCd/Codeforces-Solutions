#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a;
    long long sum=0;
    cin>>n;
    a=n;
    for(int i=1; i<=a; i++) sum+=i*(--n)+1;
    cout<<sum;
    return 0;
}
