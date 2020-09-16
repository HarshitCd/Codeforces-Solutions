#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, c=0, k;
    vector<int> v(3);
    map<vector<int>, int> m;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            k=i^j;
            if(i+j<=k || i-j>=k || k>j) continue;

            v[0] = i; v[1] = j; v[2] = k;
            if(m[v]==0){
                c++;
                m[v]++;
            }
        }
    }
    cout<<c;
    return 0;
}
