#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m=1;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    if(n==1 || (n==2 && (v[0]==v[1]))) cout<<-1;
    else{
        for(int i=0; i<n; i++){
            m = (v[i]<v[m-1])? i+1: m;
        }
        cout<<"1\n"<<m;
    }

    return 0;
}





