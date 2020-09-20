#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, m, i=0;
    cin>>n>>m;

    if(n==1) cout<<"1 1";
    else{
        int mi = max(0ll, n-2*m);
        while(i*(i-1)/2<m) i++;
        int mx = max(0ll, n-i);
        cout<<mi<<" "<<mx;
    }
    return 0;
}
