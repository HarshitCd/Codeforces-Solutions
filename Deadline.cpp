#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, d, x;
    cin>>t;
    while(t--){
        cin>>n>>d;
        int l=0, r=n, mid;
        int c=-1, x=-1;
        if(d<=n) cout<<"YES";
        else{
            while(l<=r){
                mid = (l+r)/2;
                x = (d%(mid+1)==0)?d/(mid+1): d/(mid+1)+1;
                x+=mid;
                if(x>n) r=mid-1;
                else if(x<n) l = mid+1;
                else break;
            }
            if(x==n) cout<<"YES";
            else cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}
