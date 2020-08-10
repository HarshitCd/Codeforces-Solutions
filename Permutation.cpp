#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, ans=0;
    map<int, int> m;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        if(a<1 || a>n) ans++;
        else if(m[a]!=0){
            ans++;
        }
        else m[a]++;
    }
    cout<<ans;
    return 0;
}
