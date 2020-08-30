#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i, j, m=-1e9, k=-1;
    string s="";

    cin>>n;
    vector<int> v(n);
    for(i=0; i<n; i++) cin>>v[i];

    i=0; j=n-1;
    while(i<=j){
        if(m<min(v[i], v[j])) m = min(v[i], v[j]);
        else if(m<max(v[i], v[j])) m = max(v[i], v[j]);
        else break;
        //cout<<m<<" ";
        if(m==v[i]){s+='L'; i++;}
        else if(m==v[j]){s+='R'; j--;}
        else break;
    }
    cout<<s.size()<<"\n"<<s;
    return 0;
}
