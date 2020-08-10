#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, c=0, d=0, p=0, ne=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i]%2!=0){
            if(v[i]<0){
                v[i]=v[i]/2-d;
                d=(d+1)%2;
            }
            else{
                v[i]=v[i]/2+c;
                c=(c+1)%2;
            }
        }
        else v[i]/=2;
    }

    for(auto x: v) cout<<x<<endl;
    return 0;
}
