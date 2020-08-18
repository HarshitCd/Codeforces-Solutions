#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, i;
    string s;
    cin>>t;
    while(t--){
        map<char, int> m;
        cin>>s;
        for(auto x: s) m[x]++;
        int ver = min(m['U'], m['D']);
        int hor = min(m['R'], m['L']);

        if(ver==0 || hor==0){
            if(ver==0 && hor==0) cout<<0;
            else if(ver==0) cout<<2<<"\nLR";
            else cout<<2<<"\nUD";
        }
        else{
            cout<<2*hor+2*ver<<endl;
            i=0;
            while(i<hor){cout<<"R"; i++;}
            i=0;
            while(i<ver){cout<<"U"; i++;}
            i=0;
            while(i<hor){cout<<"L"; i++;}
            i=0;
            while(i<ver){cout<<"D"; i++;}
        }
        cout<<endl;
    }
    return 0;
}
