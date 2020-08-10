#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, ans=0, a, j=0, s=1;
    cin>>n;
    n+=n;
    map<int , int> m;
    for(int i=0; i<n; i++){
        cin>>a;
        m[a]++;
        if(m[a]==2){
            ans = max(j, ans);
            m[a]=0;
            j--;
        }
        else j++;
    }
    cout<<ans;
    return 0;
}
