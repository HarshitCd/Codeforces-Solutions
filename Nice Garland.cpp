#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, mi=0;
    string s;
    cin>>n>>s;
    vector<string> permu = {"RGB", "RBG", "BRG", "BGR", "GRB", "GBR"};
    vector<int> cost(6);
    for(int i=0; i<6; i++){
        for(int j=0; j<n; j++){
            if(permu[i][j%3]!=s[j]) cost[i]++;
        }
        if(cost[mi]>cost[i]) mi=i;
    }
    cout<<cost[mi]<<endl;
    for(int i=0; i<n; i++) cout<<permu[mi][i%3];
    return 0;
}
