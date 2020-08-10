#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, c=0, ans=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        c+=b-a;
        ans=(c>ans)?c:ans;

    }
    cout<<ans;
    return 0;
}
