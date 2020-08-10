#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, a, b, ans=0;
    cin>>n>>k;
    vector<int> u(k);
    for(int i=0; i<n; i++){
        cin>>a;
        u[a-1]++;
    }
    a=(n%2==0)?n/2:n/2+1;
    for(int i=0; i<k; i++){
        if(a>0){
            b=u[i]/2;
            a=a-b;
            ans+=2*b;
            //cout<<a<<"/"<<b<<" ";
        }
        else{
            a+=b;
            ans=ans-2*b+2*a;
            break;
        }
    }
    for(int i=0; i<k; i++){
        if(a>0 && u[i]%2==1){ans++; a--;}
    }
    cout<<ans;
    return 0;

}
