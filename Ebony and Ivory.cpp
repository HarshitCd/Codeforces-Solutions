#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;

    if(a>b) swap(a, b);
    int n = c/a;
    int m = c%a;

    while(n--){
        if(m%b!=0) m+=a;
        else break;
    }

    if(m%b==0) cout<<"Yes";
    else cout<<"No";
    return 0;

}
