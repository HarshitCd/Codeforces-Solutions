#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, l, a, c=0, b=0;
    map<int, int> m;
    cin>>n>>l;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=n-1; i>=0; i--){
        if(m[v[i]]==0) c++;
        m[v[i]]++;
        v[i]=c;
    }

    while(l--){
        cin>>a;
        a--;
        cout<<v[a]<<endl;
    }
    return 0;
}
