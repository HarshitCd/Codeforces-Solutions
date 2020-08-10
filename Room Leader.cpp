#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string, int> m;
    string s;
    int a, sum=0, n, p, mi;
    cin>>n;
    for(int i=0; i<n; i++){
        sum=0;
        cin>>s>>p>>mi;
        for(int j=0; j<5; j++){
            cin>>a;
            sum+=a;
        }
        m[s]=sum+p*100-mi*50;
    }
    a=INT_MIN;
    for(auto x: m){
        if(x.second>a){
            a=x.second;
            s=x.first;
        }
    }
    cout<<s;
    return 0;
}
