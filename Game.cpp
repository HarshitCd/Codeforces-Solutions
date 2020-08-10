#include<bits/stdc++.h>
using namespace std;

int Game(vector<int>& v, int n){
    sort(v.begin(), v.end());
    int i=n-1, j=0;
    while(i!=j){
        i--;
        if(i==j) break;
        j++;
    }
    return v[i];
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    cout<<Game(v, n);
    return 0;
}
