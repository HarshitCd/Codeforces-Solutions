#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, k;
    cin>>n>>k;
    long long a =n/2, b, c, d;
    if(k+1>a) cout<<"0 0 "<<n<<endl;
    else{
        b=a/(k+1);
        d = n-b*(k+1);
        c = n-(b+d);
        cout<<b<<" "<<c<<" "<<d<<endl;
    }
    return 0;
}
