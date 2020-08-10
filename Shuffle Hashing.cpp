#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    string p, h;
    cin>>t;
    while(t--){
        cin>>p>>h;
        string s;
        int n1, n2;
        sort(p.begin(), p.end());
        n1 = p.size();
        n2 = h.size();
        if(n1>n2) cout<<"NO\n";
        else{

            for(int i=0; i<n2-n1+1; i++){
                s = h.substr(i, n1);
                sort(s.begin(), s.end());
                if(s==p){cout<<"YES\n"; break;}
            }
            if(s!=p) cout<<"NO\n";
            //cout<<s<<" "<<p<<endl;
        }
    }
    return 0;
}

