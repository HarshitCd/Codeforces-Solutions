#include<bits/stdc++.h>
using namespace std;

int Dice_Rolling(int x){
    return x/7+1;
}

int main(){
    int t, x;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>x;
        cout<<Dice_Rolling(x)<<endl;
    }
    return 0;
}
