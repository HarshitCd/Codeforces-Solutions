#include<bits/stdc++.h>
using namespace std;

int main(){
    const int mx = 16;
    int n, a, arr[] = {4, 6, 9};
    cin>>n;

    vector<long long> v(mx, -1);
    v[0]=0;
    for(int i=0; i<mx; i++){
        for(int j: arr){
            if(i>=j && v[i-j]!=-1){
                v[i] = max(v[i], v[i-j]+1);
            }
        }
    }

    while(n--){
        cin>>a;
        if(a>=mx){
            long long t = (a-mx)/4+1;
            cout<<t+v[a-4*t];
        }
        else cout<<v[a];
        cout<<endl;
    }
    return 0;
}
