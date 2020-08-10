#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, k, s;
    int t, i;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<int> v(n);
        for(i=0; i<n; i++)
            cin>>v[i];
        sort(v.begin(), v.end());
        s=v[0]+k;
        if(abs(v[n-1]-s)>k) cout<<-1<<endl;


        else cout<<s<<endl;
    }
    return 0;
}
