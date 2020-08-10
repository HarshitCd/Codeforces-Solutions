#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, a;
    cin>>t;
    while(t--){
        int b=2, c=1;
        cin>>n;
        vector<pair<int , int>> e, o;
        for(int i=0; i<2*n; i++){
            cin>>a;
            if(a%2==0) e.push_back(make_pair(a, i+1));
            else o.push_back(make_pair(a, i+1));
        }
        if(e.size()%2==0){
            c=2;
            if(e.size()==0) c=0;
            else if(o.size()==0) c=2;
        }
        //cout<<c<<"-"<<b-c<<" "<<e.size()<<"-"<<o.size()<<endl;
        for(int i=0; i<(e.size()-c)/2; i++) cout<<e[2*i].second<<" "<<e[2*i+1].second<<"\n";
        for(int i=0; i<(o.size()-b+c)/2; i++){cout<<o[2*i].second<<" "<<o[2*i+1].second<<"\n";}
    }
    return 0;
}
