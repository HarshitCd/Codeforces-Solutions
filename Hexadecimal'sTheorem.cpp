#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i=1, s=0, k=0, j=0;
    cin>>n;
    cout<<"0 0 "<<n;
    vector<int> v(3, 0);

    if(n==3){
        cout<<"1 1 1";
    }
    else if(n==2){
        cout<<"0 1 1";
    }
    else if(n==1){
        cout<<"0 0 1";
    }
    else if(n==0){
        cout<<"0 0 0";
    }
    else{
        while(i<n){
            s=i+k;
            k=i;
            i=s;
            v[(j++)%3] = k;
        }
        cout<<v[(j-2)%3]-v[(j-3)%3]<<" "<<v[(j-3)%3]<<" "<<v[(j-1)%3]<<" ";
    }
    return 0;
}

