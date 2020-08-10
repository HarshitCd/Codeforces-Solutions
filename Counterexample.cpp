#include<bits/stdc++.h>
using namespace std;

int main(){
    long long l, r;
    cin>>l>>r;
    if(r-l<2) cout<<-1;
    else if(r-l==2 && l%2==1) cout<<-1;
    else cout<<l+l%2<<" "<<l+l%2+1<<" "<<l+l%2+2;
    return 0;
}
