#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, d, j=0, ans=0;
    string s;
    cin>>n>>d>>s;
    vector<int> v;
    if(s[0]=='0'){
        cout<<-1;
        return 0;
    }
    for(int i=0; i<n; i++){
        if(s[i]=='1') v.push_back(i);
    }
    for(int i=0; i<v.size()-1; i+=j-1){
        j=1;
        while(v[i]+d>=v[i+j]) j++;
        if(j==1){
            cout<<-1;
            return 0;
        }
        ans++;
    }
    cout<<ans;
    return 0;
}
