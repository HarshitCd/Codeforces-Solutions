#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int a, b, n;
    long long ans=0;
    cin>>a>>b;
    for(int i=a; i<=b; i++){
        n=i;
        while(n){
            ans+=v[n%10];
            n/=10;
        }
    }
    cout<<ans;
    return 0;
}
