#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i, j, k;
    string s;
    cin>>n;
    vector<pair<int, int>> v(n), u(n);
    for(i=0; i<n; i++){
        cin>>v[i].first;
        v[i].second=i+1;
    }
    cin>>s;
    sort(v.begin(), v.end());
    i=j=k=0;
    while(i<2*n){
        if(s[i]=='0'){
            cout<<v[j].second<<" ";
            u[k++] = v[j++];
        }
        else{
            cout<<u[k-1].second<<" ";
            k--;
        }
        i++;
    }

    return 0;
}
