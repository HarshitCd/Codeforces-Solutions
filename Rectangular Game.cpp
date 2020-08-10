#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, ans;
    cin>>n;
    ans=n;
    while(n!=1){
        int i=2;
        while(n%i!=0){i++;}
        n/=i;
        ans+=n;
    }
    cout<<ans;
    return 0;
}
