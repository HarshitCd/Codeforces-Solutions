#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==2) cout<<"1\n1";
    else if(n==3) cout<<"2\n1 3";
    //if(n==4) cout<<"4\n3 1 4 2";
    else{
        cout<<n<<endl;
        int a = (n%2==0)? n-1:n;
        for(int i=a; i>0; i-=2){
            cout<<i<<" ";
        }
        a = (n%2==0)? n:n-1;
        for(int i=a; i>0; i-=2){
            cout<<i<<" ";
        }
    }
    return 0;
}
