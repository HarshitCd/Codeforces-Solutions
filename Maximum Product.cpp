#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t;
    cin>>t;
    while(t--){
        cin>>n;
        long long ans=1, a;
        vector<long long> p, ne;
        for(int i=0; i<n; i++){
            cin>>a;
            if(a<0) ne.push_back(a);
            else p.push_back(a);
        }

        a=0;
        if(ne.size()!=0)
            sort(ne.begin(), ne.end());

        if(p.size()!=0)
            sort(p.rbegin(), p.rend());


        int j, k;
        for(j=0; j<5 && j<ne.size(); j++)
            ans*=ne[j];
        for(k=0; k+j<5; k++)
            ans*=p[k];
        a=ans;
        for(j=j-1; j>=0; j--){
            if(k<p.size() && k<5){
                ans = p[k++]*(ans/ne[j]);
                a = max(a, ans);
            }
        }
        ans=1;
        if(p.size()==0){
            reverse(ne.begin(), ne.end());
            for(int i=0; i<5; i++) ans *= ne[i];
            a = max(ans, a);
        }
        cout<<a<<endl;
    }
    return 0;
}
