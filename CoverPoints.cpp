#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long m=0, a, b;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        if(a+b>m) m=a+b;
    }
    cout<<m;
    return 0;
}
