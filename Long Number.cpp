#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i;
    string s;
    cin>>n>>s;
    vector<int> v(10), u;
    for(i=1; i<=9; i++) cin>>v[i];
    for(i=0; i<n; i++) u.push_back(v[s[i]-'0']-(s[i]-'0'));
    for(int i=0; i<n; i++){
        if(u[i]>0){
            while(i<n && u[i]>=0){
                s[i] = char(v[s[i]-'0']+'0');
                i++;
            }
            break;
        }
    }
    cout<<s;
}
