#include<bits/stdc++.h>
using namespace std;

int main(){
    long long s=0, m=0, a;
    vector<long long> v(14), u(14);
    for(int i=0; i<14; i++){
        cin>>v[i];
        u[i]=v[i];
    }

    for(int i=0; i<14; i++){
        a=v[i];
        v[i]=0;
        int k=a/14;
        int h=a%14;
        for(int j=1; j<=h; j++){
            v[(i+j)%14]++;
        }
        for(int j=0; j<14; j++){
            if((v[j]+k)%2==0) s+=v[j]+k;
            v[j]=u[j];
        }
        //cout<<s<<endl;
        m = max(s, m);
        s=0;
    }
    cout<<m;
    return 0;
}
