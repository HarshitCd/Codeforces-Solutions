#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, x, i=0;
    cin>>a>>b>>x;

    if(x%2==0 && a>b){
        for(int i=0; i<x/2; i++) cout<<"01";
        cout<<string(b-x/2, '1')<<string(a-x/2, '0');
    }
    else if(x%2==0 && a<=b){
        for(int i=0; i<x/2; i++) cout<<"10";
        cout<<string(a-x/2, '0')<<string(b-x/2, '1');
    }
    else if(x%2==1 && a>b){
        for(int i=0; i<x/2; i++) cout<<"01";
        cout<<string(a-x/2, '0')<<string(b-x/2, '1');
    }
    else{
        for(int i=0; i<x/2; i++) cout<<"10";
        cout<<string(b-x/2, '1')<<string(a-x/2, '0');
    }
    return 0;
}
