#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, a=-1, s=0;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(a<v[i]) a=v[i];
    }
    for(int x: v) s+=abs(x-a);
    int ma=a+m, mi=a;
    if(s<m){
        m-=s;
        mi=mi+m/n;

        mi+=(m%n==0)?0:1;
    }
    cout<<mi<<" "<<ma;
    return 0;
}
