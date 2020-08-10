#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t, sum=0, i;
    cin>>t;
    for(int j=0; j<t; j++){
        cin>>n;
        int a=n/2;
        if(a%2==0){
            cout<<"YES\n";
            for(i=2; i<=n; i+=2){
                sum+=i;
                //cout<<sum<<"-";
                cout<<i<<" ";
            }
            for(i=1; i<=n-3; i+=2){
                sum-=i;
                //cout<<sum<<"-";
                cout<<i<<" ";
            }
            cout<<sum<<endl;
            sum=0;
        }
        else cout<<"NO\n";
    }
    return 0;
}
