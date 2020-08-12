#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%2==0) cout<<"NO";
    else{
        vector<int> v(2*n);
        for(int i=0; i<n; i++){
            if(i%2==0){
                v[i] = 2*i+1;
                v[n+i] = 2*i+2;
            }
            else{
                v[i] = 2*i+2;
                v[n+i] = 2*i+1;
            }
        }
        cout<<"YES\n";
        for(int x: v) cout<<x<<" ";
    }
    return 0;
}
