#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i=9, s=0;
    map<int , int> m;
    cin>>n;
    if(n==1){
        cout<<"1\n1";
        return 0;
    }
    while(n%i!=0){
        i--;
    }
    s=n/i;
    cout<<s<<endl;
    for(int j=0; j<s; j++)
        cout<<i<<" ";

    return 0;
}
