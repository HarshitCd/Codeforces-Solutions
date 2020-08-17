#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i, j, c=0, m=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    i=0; j=0;
    while(j<n){
        if(v[j]-v[i]<=5){c++; j++;}
        else{
            m = max(m, c);
            i++;
            c--;
        }
    }
    cout<<max(m, c);
    return 0;
}
