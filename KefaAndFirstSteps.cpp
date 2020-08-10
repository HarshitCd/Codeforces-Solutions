#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k=1, ans=1;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=1; i<n; i++){
        if(v[i]>=v[i-1]) k++;
        else{
            ans=(ans>k)?ans:k;
            k=1;
        }
    }
    ans=(ans>k)?ans:k;
    cout<<ans;
    return 0;

}
