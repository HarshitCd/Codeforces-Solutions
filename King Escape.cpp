#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[2], b[2], c[2], n;
    cin>>n;
    cin>>a[0]>>a[1];
    cin>>b[0]>>b[1];
    cin>>c[0]>>c[1];

    if(a[0]<b[0] && a[1]<b[1] && a[0]<c[0] && a[1]<c[1]) cout<<"YES";
    else if(a[0]>b[0] && a[1]<b[1] && a[0]>c[0] && a[1]<c[1]) cout<<"YES";
    else if(a[0]>b[0] && a[1]>b[1] && a[0]>c[0] && a[1]>c[1]) cout<<"YES";
    else if(a[0]<b[0] && a[1]>b[1] && a[0]<c[0] && a[1]>c[1]) cout<<"YES";
    else cout<<"NO";

    return 0;
}
