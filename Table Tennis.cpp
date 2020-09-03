#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, k, m=-1, j=0, c=0;

        cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(m<v[i]) m=v[i];
    }

    if(k>=n) cout<<m;
    else{
        for(int i=1; i<n; i++){
            if(v[j]>v[i]) c++;
            else{j=i; c=1;}

            if(v[j]==m) break;
            if(c==k) break;
        }
        cout<<v[j];
    }
    return 0;
}
