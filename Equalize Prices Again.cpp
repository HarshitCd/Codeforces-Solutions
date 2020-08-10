#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, a, sum=0;
    cin>>t;
    while(t--){
        cin>>n;
        sum=0;
        for(int i=0; i<n; i++){
            cin>>a;
            sum+=a;
        }
        (sum%n==0)? cout<<sum/n: cout<<sum/n+1;
        cout<<"\n";
    }
    return 0;
}
