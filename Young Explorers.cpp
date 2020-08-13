#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t;
    cin>>t;
    while(t--){
        cin>>n;
        int a, mo=0;
        long long s=0;
        map<int, int> m;
        for(int i=0; i<n; i++){
            cin>>a;
            m[a]++;
        }
        for(auto i: m){
            s=s+(i.second+mo)/i.first;
            mo = (i.second+mo)%i.first;
        }
        cout<<s<<endl;
    }
    return 0;
}
