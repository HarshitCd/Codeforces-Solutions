#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, m=INT_MAX, c=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());

    for(int i=0; i<n-1; i++){
        int a = abs(v[i]-v[i+1]);
        if(m>a){
            m=a;
            c=1;
        }
        else if(m==a) c++;
    }

    cout<<m<<" "<<c;
    return 0;
}
