#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, x;
    cin>>n;
    vector<map<int, int>> v(n);

    for(int i=0; i<n; i++){
        v[i][-1]++;
        for(int j=0; j<6; j++){
            cin>>a;
            v[i][a]++;
        }
    }

    if(n==3){
        for(int i=0; i<=9; i++){
            for(int j=0; j<=9; j++){
                for(int k=0; k<=9; k++){
                    if(!(i || j || k)) continue;
                    if(i==0) i=-1;
                    if(j==0) j=-1;
                    x=1;
                    if(v[0][i] && v[1][j] && v[2][k]) x=0;
                    else if(v[0][i] && v[1][k] && v[2][j]) x=0;
                    else if(v[0][j] && v[1][i] && v[2][k]) x=0;
                    else if(v[0][j] && v[1][k] && v[2][i]) x=0;
                    else if(v[0][k] && v[1][j] && v[2][i]) x=0;
                    else if(v[0][k] && v[1][i] && v[2][j]) x=0;

                    if(i==-1) i=0;
                    if(j==-1) j=0;
                    if(x){cout<<i*100+j*10+k-1; return 0;}
                }
            }
        }
    }

    else if(n==2){
        for(int i=0; i<=9; i++){
            for(int j=0; j<=9; j++){
                if(!(i || j)) continue;
                if(i==0) i=-1;
                x=1;

                if(v[0][i] && v[1][j]) x=0;
                else if(v[0][j] && v[1][i]) x=0;

                if(i==-1) i=0;
                if(x){cout<<i*10+j-1; return 0;}
            }
        }
    }

    else{
        for(int i=0; i<=9; i++){
            if(!(i)) continue;
            if(i==0) i=-1;
            x=1;

            if(v[0][i]) x=0;
            if(i==-1) i=0;
            if(x){cout<<i-1; return 0;}
        }
    }

    return 0;
}
