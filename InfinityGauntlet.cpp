#include<bits/stdc++.h>
#include<string>
using namespace std;

void Leftovers(vector<string>& vs, int ss){
    int n = 6-ss;
    unordered_map<string, string> s;
    s["purple"] = "Power";
    s["green"] = "Time";
    s["blue"] = "Space";
    s["orange"] = "Soul";
    s["red"] = "Reality";
    s["yellow"] = "Mind";

    for(int i=0; i<ss; i++){
        s[vs[i]]="a";
    }
    cout<<n<<endl;
    for(auto x: s){
        if(x.second!="a") cout<<x.second<<endl;
    }
}

int main(){
    int n;
    string s;
    vector<string> vs;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s;
        vs.push_back(s);
    }
    Leftovers(vs, n);
    return 0;
}
