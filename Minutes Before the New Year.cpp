#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, h, m;
    cin>>t;
    while(t--){
        cin>>h>>m;
        h=24-h-1;
        m=60-m;
        cout<<60*h+m<<endl;
    }
    return 0;
}
