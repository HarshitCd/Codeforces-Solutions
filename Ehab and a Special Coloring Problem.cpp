#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, c=1;
    cin>>n;
    vector<int> v(n);
    for(int i=1; i<n; i++){
        if(v[i]==0){
            v[i]=c++;
            for(int j=i; j<n; j+=i+1) v[j]=v[i];
        }
        cout<<v[i]<<" ";
    }
    return 0;
}
