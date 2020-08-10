#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; v[0][i]!='\0'; i++){
        for(int j=0; j<n-1; j++){
            if(v[j][i]!=v[j+1][i]){
                cout<<i;
                return 0;
            }
        }
    }
    cout<<v[0].size();
    return 0;
}
