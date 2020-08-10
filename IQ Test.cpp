#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<char>> v(4, vector<char>(4, '.'));
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++) cin>>v[i][j];
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            int c=0;
            for(int r=i; r<=i+1; r++){
                for(int s=j; s<=j+1; s++){
                        if(v[r][s]=='.') c++;
                }
            }
            if(c!=2){cout<<"YES"; return 0;}
        }
    }
    cout<<"NO";
    return 0;
}
