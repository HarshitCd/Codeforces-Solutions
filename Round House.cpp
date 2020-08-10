#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, sum=0;;
    cin>>n>>a>>b;
    b=b%n;
    if(b<0) sum=n+b+a;
    else sum=a+b;

    if(sum%n==0) cout<<n<<endl;
    else cout<<sum%n<<endl;
    return 0;
}
