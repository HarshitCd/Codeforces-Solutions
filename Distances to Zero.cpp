#include<bits/stdc++.h>
using namespace std;

int main(){
    const int inf = 1e9+7;
    int n, j;
    cin>>n;
    vector<int> v(n), z(1);
    z[0]=-1;
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i]==0) z.push_back(i);
        else v[i]=inf;
    }

    z.push_back(n);

    for(int i=1; i<z.size()-1; i++){
        j=1;
        while(z[i]-j>z[i-1] && j<v[z[i]-j]){
            v[z[i]-j]=j;
            j++;
        }
        j=1;
        while(z[i]+j<z[i+1] && j<v[z[i]+j]){
            v[z[i]+j]=j;
            j++;
        }
    }

    for(int x: v) cout<<x<<" ";
    return 0;
}
