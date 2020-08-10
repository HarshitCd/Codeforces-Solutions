#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i=0;
    cin>>n;
    int a = n*n;
    int b = n, c=n/2;
    while(b--){
        while(c--){
            cout<<i+1<<" "<<a-i<<" ";
            i++;
        }
        cout<<endl;
        c=n/2;
    }
    return 0;
}
