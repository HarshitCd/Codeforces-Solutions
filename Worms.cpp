#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t, a=0, i, l, h, mid;
    cin>>n;
    vector<int> v(n+1);

    for(i=1; i<=n; i++){
        cin>>v[i];
        v[i]=v[i-1]+v[i];
        a=v[i];
    }
    cin>>t;
    while(t--){
        l=1; h=n;
        cin>>a;
        while(l<=h){
            mid = (l+h)/2;
            if(a==v[mid]) break;
            if(a>v[mid-1] && a<v[mid]) break;
            else if(a>v[mid-1]) l=mid+1;
            else if(a<v[mid]) h=mid-1;
            //cout<<mid<<" ";
        }
        cout<<mid<<"\n";
    }
    return 0;
}
