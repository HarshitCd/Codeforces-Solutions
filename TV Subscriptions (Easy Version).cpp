#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
        int n, k, d, mi=1000;
        cin>>n>>k>>d;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        for(int i=0; i<=n-d; i++){
            set<int> s;
            for(int j=i; j<d+i; j++)
                s.insert(v[j]);
            if(mi>s.size()) mi=s.size();
        }
        cout<<mi<<endl;
   }
   return 0;
}
