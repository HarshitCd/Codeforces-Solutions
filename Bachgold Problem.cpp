#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, ans=0;
    cin>>n;
    if(n==3){
        cout<<"1\n3";
        return 0;
    }
    ans=(n%2==0)?n/2:(n-3)/2+1;
    cout<<ans<<endl;
    if(n%2==1){
        n-=3;
        ans--;
        cout<<3<<" ";
    }
    while(ans-->1){
        cout<<2<<" ";
    }
    cout<<2;
    return 0;
}
