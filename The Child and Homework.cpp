#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    vector<pair<int, int>> v(4);
    int i, j, f;
    for(i=0; i<4; i++){
        cin>>s;
        j=0, f=0;
        for(int i=2; i<s.size(); i++){
            if(s[i]=='_') j++;
            else break;
        }
        v[i].first = s.size()-2-j;
        v[i].second = i;
        if(v[i].first!=0){
            j=0;
            for(int i=s.size(); i>=2; i--){
                if(s[i]=='_') j++;
                else break;
            }
            v[i].first -= j;
        }
    }

    //for(pair<int, int> x: v) cout<<x.first<<" "<<x.second<<endl;
    sort(v.begin(), v.end());
    int a  = 2*v[0].first;

    for(i=1; i<4; i++){
        if(a>v[i].first || (a/2==v[i].first && a/2==v[i].first )) break;
    }
    if(i==4) f++;

    a = v[3].first;
    for(i=0; i<3; i++){
        if(a<2*v[i].first || (a==v[i].first && a==2*v[i].first )) break;
    }
    if(i==3 && f==0) cout<<(char)('A'+v[3].second);
    else if(i!=3 && f==1) cout<<(char)('A'+v[0].second);
    else cout<<"C";

    return 0;
}
