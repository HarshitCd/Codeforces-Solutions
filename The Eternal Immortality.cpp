#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a, b, c=1, d=1;
    cin>>a>>b;

    for(long long i=b; i>a && c!=0; i--){c = (c*i%10)%10;}

    cout<<c;
    return 0;
}
