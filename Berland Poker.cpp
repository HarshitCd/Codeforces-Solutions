#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k, m;
    cin>>t;
    while(t--){
        int x, y;
        cin>>n>>m>>k;
        x=n/k;
        y=min(x, m);
        m-=y;
        x=(m%(k-1))==0?m/(k-1): m/(k-1)+1;
        //cout<<y<<" "<<x<<" "<<m<<" "<<k<<endl;
        cout<<y-x<<endl;
    }
    return 0;
}
