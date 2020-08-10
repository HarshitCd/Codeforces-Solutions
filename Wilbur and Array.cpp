#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, ans=0, a, b=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        ans+=abs(b-a);
        b=a;
    }
    cout<<ans;
    return 0;
}
