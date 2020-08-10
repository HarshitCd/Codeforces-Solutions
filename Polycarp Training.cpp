#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a=1, ans=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    for(int x: v){
        if(x>=a) a++;
    }
    cout<<a-1;
    return 0;
}
