#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t, a, b, c, m1, m2;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        m1=(a<c)?1:-1;
        m2=(c<a*b)? b:-1;
        cout<<m1<<" "<<m2<<endl;
    }
    return 0;
    return 0;
}
