#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    char c='a';
    cin>>n>>k;
    for(int i=0; i<n; i++)
        cout<<(char)(c+i%k);
    return 0;
}
