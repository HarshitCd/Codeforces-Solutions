#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, ans=0, i=1;
    vector<int> v;
    cin>>n;
    while(n>=i){
        v.push_back(i);
        n-=i;
        i++;
    }
    v[v.size()-1]+=n;
    cout<<v.size()<<endl;
    for(int i: v) cout<<i<<" ";
    return 0;
}
