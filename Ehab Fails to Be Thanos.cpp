#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, k=0;
    cin>>n;
    n*=2;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(i!=0 && v[i]!=a) k++;
        a=v[i];
    }
    if(k){
        sort(v.begin(), v.end());
        for(int i=0; i<n-1; i++)
            cout<<v[i]<<" ";
        cout<<v[n-1];
    }
    else cout<<-1;
    return 0;
}
