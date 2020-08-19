#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t, res, cur, i, k;
    string s;
    cin>>t;
    while(t--){
        res=0, cur=0, k=0;
        cin>>s;
        long long n = s.size();
        for(i=0; i<n; i++){
            cur += (s[i]=='+')?1:-1;
            res++;
            if(cur<0){
                cur=0;
                res+=i+1;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
