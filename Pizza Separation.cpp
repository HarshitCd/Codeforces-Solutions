#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, mi=360, s=0, c=0, k;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    for(int i=0; i<n-1; i++){
        s+=v[i];
        c=s;
        k=0;
        mi = min(abs(360-2*c), mi);
        for(int j=i+1; j<i+n; j++){
            c = c+v[j%n]-v[k++];
            mi = min(mi, abs(360-2*c));
        }
    }
    cout<<mi;
    return 0;
}
