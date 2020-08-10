#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a1, a2, k1, k2, n, nn, ma, mi;
    cin>>a1>>a2>>k1>>k2>>n;
    nn=n;
    if(a1*k1+a2*k2<=n) ma=a1+a2;

    else if(k1<k2){
        if(a1<n/k1){
            ma=a1;
            n-=a1*k1;
            ma+=n/k2;
        }
        else{
            ma=n/k1;
        }
    }

    else{
        if(a2<n/k2){
            ma=a2;
            n-=a2*k2;
            ma+=n/k1;
        }
        else{
            ma=n/k2;
        }
    }

    n=nn;

    n-=a1*(k1-1)+a2*(k2-1);
    if(n<=0) mi=0;
    else mi=n;


    cout<<mi<<" "<<ma;
    return 0;

}
