#include<bits/stdc++.h>
using namespace std;

long long recurrence(long long a){
    long long s = a;
    int ma=0, mi=10, z;
    while(a){
        z = a%10;
        ma = max(ma, z);
        mi = min(mi, z);
        a/=10;
    }
    return mi*ma;
}

int main(){
    long long t, n, a, b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        for(int i=1; i<b; i++){
            n=recurrence(a);
            if(n) a+=n;
            else break;
        }
        cout<<a<<endl;
    }
    return 0;
}
