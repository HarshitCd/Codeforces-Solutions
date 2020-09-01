#include<bits/stdc++.h>
using namespace std;

int main(){
    int h1, a1, c, h2, a2, h;
    cin>>h1>>a1>>c>>h2>>a2;
    vector<string> v;
    h=h1;
    while(h2 > 0){
        if((a1 >= h2) || h1 > a2){v.push_back("STRIKE"); h2-=a1;}
        else{v.push_back("HEAL"); h1+=c;}
        h1-= a2;
    }
    cout<<v.size()<<endl;
    for(string s: v) cout<<s<<endl;
    return 0;
}
