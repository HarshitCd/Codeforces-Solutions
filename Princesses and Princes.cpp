#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k, a, f, i, j;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> p(n), pi(n);
        for(i=0; i<n; i++){
            f=0;
            cin>>k;
            for(j=0; j<k; j++){
                cin>>a;
                if(f==0 && p[--a]==0){
                    f++;
                    p[a]++;
                    pi[i]++;
                }
            }
        }
        for(i=0; i<n; i++) if(pi[i]==0) break;
        if(i==n) cout<<"OPTIMAL\n";
        else{
            for(j=0; j<n; j++) if(p[j]==0) break;
            cout<<"IMPROVE\n"<<i+1<<" "<<j+1<<endl;
        }
    }

    return 0;
}
