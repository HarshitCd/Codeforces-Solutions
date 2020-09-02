#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, c, t, l, h, mid, a;
    cin>>n>>m;
    vector<int> v(n+2);
    v[n+1] = 1e9+7;
    for(int i=1; i<=n; i++){
        cin>>c>>t;
        v[i]=c*t+v[i-1];
    }

    while(m--){
        cin>>a;
        l=0; h=n;
        while(l<=h){
            mid=(l+h)/2;
            if(a>v[mid] && a<=v[mid+1]) break;
            else if(v[mid]==a){mid--; break;}
            else if(v[mid]<a) l=mid+1;
            else if(v[mid+1]>a)h=mid-1;
        }

        cout<<mid+1<<endl;
    }
    return 0;
}
