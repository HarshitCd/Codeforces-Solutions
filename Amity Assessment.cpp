#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> v(2), u(2);
    string t="", s="", x="", y="";
    int i;

    for(i=0; i<2; i++) cin>>v[i];
    for(i=0; i<2; i++) cin>>u[i];

    t = v[0]+v[1][1]+v[1][0];
    s = u[0]+u[1][1]+u[1][0];

    for(int i=0; i<4; i++){
        if(s[i]!='X') x+=s[i];
        if(t[i]!='X') y+=t[i];
    }


    for(i=0; i<3; i++){
        if(x[i]==y[0]){
            int j=1;
            while(j<3){
                if(x[(i+j)%3]!=y[j]) break;
                j++;
            }
            if(j==3) cout<<"YES";
            else cout<<"NO";
            break;
        }
    }

    if(i==3) cout<<"NO";
    return 0;
}
