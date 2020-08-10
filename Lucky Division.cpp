#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[]={4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    for(int x: arr){
        if(x>n){
            cout<<"NO";
            return 0;
        }
        if(n%x==0){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
