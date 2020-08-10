#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t, a, b;
    cin>>t;
    while(t--){
        long long i=0, c=0;
        cin>>a>>b;
        while(b/10){i++; if(b%10==9) c++; b/=10;}
        if(c==i && b==9) i++;
        cout<<a*i<<endl;
    }
    return 0;
}
