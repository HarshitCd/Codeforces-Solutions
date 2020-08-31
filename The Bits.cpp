#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    char c[] {'0', '0', '1', '1'};
    char d[] {'0', '1', '0', '1'};
    vector<long long> v(4);
    string a, b;
    cin>>n>>a>>b;

    for(int i=0; i<n; i++){
        for(int j=0; j<4; j++){
            if(c[j]==a[i] && d[j]==b[i]){
                v[j]++;
                break;
            }
        }
    }
    cout<<v[0]*v[2]+v[0]*v[3]+v[1]*v[2];
    return 0;
}
