#include<bits/stdc++.h>
using namespace std;

int Grade_Allocation(vector<int>& v, int& m){
    int sum=0;
    for(auto x: v) sum+=x;
    return (sum<=m)?sum:m;
}

int main(){
    int t, n, m;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n>>m;
        vector<int> v(n);
        for(int j=0; j<n; j++)
            cin>>v[j];
        cout<<Grade_Allocation(v, m)<<endl;;
    }
    return 0;
}
