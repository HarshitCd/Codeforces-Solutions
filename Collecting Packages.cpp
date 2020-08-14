#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, x, y, i;
    cin>>t;
    while(t--){
        int a=0, b=0, f=1;
        string s="";
        vector<pair<int, int>> v;

        cin>>n;
        for(int i=0; i<n; i++){
            cin>>x>>y;
            v.push_back(make_pair(x, y));
        }
        sort(v.begin(), v.end());
        for(auto z: v){
            if(z.first-a>=0 && z.second-b>=0){
                i=a;
                while(i!=z.first){
                    s+='R';
                    i++;
                }
                i=b;
                while(i!=z.second){
                    s+='U';
                    i++;
                }
                a=z.first; b=z.second;
            }
            else {cout<<"NO"; f=0; break;}
        }
        if(f) cout<<"YES\n"<<s;
        cout<<endl;
    }
    return 0;
}
