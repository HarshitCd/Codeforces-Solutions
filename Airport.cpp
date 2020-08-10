#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, i, k;
    cin>>n>>m;
    vector<int> v(m);
    for(i=0; i<m; i++) cin>>v[i];
    sort(v.begin(), v.end());
    vector<int> u=v;
    reverse(u.begin(), u.end());
    int l=0, h=0, c=n; i=0; k=0;
    while(c--){
        if(i<m-1 && v[i]==0) i++;
        l+=v[i];
        v[i]=(v[i]==0)?0:v[i]-1;

        h+=u[k];
        if(u[k]!=0 && u[k%m]==u[(k+1)%m]){u[k]--; k=(k+1)%m;}
        else if(u[0]>=u[k]) {u[k]--; k=0;}
        else u[k]--;
    }


    cout<<h<<" "<<l;
    return 0;
}
