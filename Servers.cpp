#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, q, t, k, d, a, b=0, ans;
    cin>>n>>q;
    a=n;
    vector<int> v(n+1);
    unordered_map<int, vector<int>> m;

    for(int i=0; i<q; i++){
        cin>>t>>k>>d;
        ans=0;
        while(b<=t){
            if(m[b].size()!=0)
                for(int x: m[b]){v[x]=0; n++;}
            b++;
        }

        if(n>=k){
            int j=0;
            for(int i=1; i<=a && j<k; i++){
                if(v[i]==0){
                    j++;
                    ans+=i;
                    m[t+d].push_back(i);
                    v[i]=1;
                }
            }
            cout<<ans;
            n-=k;
        }
        else cout<<-1;
        cout<<endl;
    }
    return 0;
}
