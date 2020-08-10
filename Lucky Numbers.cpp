#include<bits/stdc++.h>
using namespace std;

int main(){
    long long i=1, s=0, p=2;
    int n;
    cin>>n;
    while(i<=n){
        s+=p;
        p*=2;
        i++;
    }
    cout<<s;
    return 0;
}
