#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, c;
    cin>>n;
    vector<int> v(++n+1, 1);
    for(int i=2; i<=n; i++){
        if(v[i]==1 && (long long)i*i<=n){
            for(int j=i*i; j<=n; j+=i) v[j]=2;
        }
    }

    c = (n<=3)? 1: 2;
    cout<<c<<endl;
    for(int i=2; i<=n; i++) cout<<v[i]<<" ";
    return 0;
}
