#include<bits/stdc++.h>
using namespace std;

int main(){
    long long r, d, n, x, y, a, c=0;
    cin>>r>>d>>n;
    vector<vector<int>> v(n, vector<int>(3));
    for(int i=0; i<n; i++){
        cin>>x>>y>>a;
        long long dis = x*x+y*y;
        //cout<<r<<"_"<<d<<"_"<<a<<endl;
        //cout<<d<<"-"<<(r-a)*(r-a)<<"-"<<(r-d+a)*(r-d+a)<<"\n";
        if(dis<=(r-a)*(r-a) && dis>=(r-d+a)*(r-d+a)) c++;
    }
    cout<<c;
}
