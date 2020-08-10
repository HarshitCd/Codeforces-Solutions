#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(n==2) cout<<"NO";
        else if(n%2!=k%2) cout<<"NO";
        else if(sqrt(n)<k) cout<<"NO";
        else cout<<"YES";
        cout<<endl;
    }
    return 0;
}

