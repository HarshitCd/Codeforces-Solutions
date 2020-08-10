#include<bits/stdc++.h>
using namespace std;

int Number_Of_Notebooks(int n, int k){
    int a[] = {2*n, 5*n, 8*n};
    int ans=0;
    for(int x: a) ans+=(x%k==0)?x/k:x/k+1;
    return ans;
}

int main(){
    int n, k;
    cin>>n>>k;
    cout<<Number_Of_Notebooks(n, k);
    return 0;
}
