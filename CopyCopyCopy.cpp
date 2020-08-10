#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t, a;
    cin>>t;
    for(int j=0; j<t; j++){
        a=1;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        for(int i=0; i<n-1; i++){
            if(v[i]<v[i+1]) a++;
        }
        cout<<a<<endl;
    }
    return 0;
}
