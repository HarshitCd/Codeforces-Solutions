#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,
                31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,
                31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int n, j, c=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i]==29 && c==0){v[i]--; c++;}
    }

    for(int i=0; i<36; i++){
        j=0;
        while(a[i+j]==v[j]) j++;
        if(j==n){
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
    return 0;
}
