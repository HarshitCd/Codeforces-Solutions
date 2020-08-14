#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t, n, m;
    cin>>t;
    while(t--){
        vector<long long> v;
        long long s, i;
        cin>>n>>m;
        i=2*m;
        s=m%10;
        v.push_back(s);
        while(find(v.begin(), v.end(), i%m)==v.end() && i<=n){
            s+=i%10;
            v.push_back(i%10);
            i+=m;
        }
        long long x = (i-m)/m, a = n/m, b = a/x, j, c=a%x, d=0;
        if(b!=0){
            for(j=0; j<c; j++){
                d+=v[j];
            }
        }
        cout<<b*s+d<<endl;
    }
    return 0;
}
