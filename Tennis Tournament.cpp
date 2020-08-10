#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, b, p, m, i=1, c=0, k, nb=0;
    cin>>n>>b>>p;
    int np=n*p;

    while(n!=1){
        m=n;
        i=1;
        c=0;
        while(m){
            if((m=m>>1)) c=i;
            i++;
        }
        k=pow(2, c);
        nb+=k*b+k/2;
        n=n-k/2;
        //cout<<n<<" "<<k<<endl;
    }
    cout<<nb<<" "<<np;
    return 0;
}
