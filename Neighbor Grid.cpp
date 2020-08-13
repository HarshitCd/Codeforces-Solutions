#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, m;
    cin>>t;
    while(t--){
        int f=1;
        cin>>n>>m;
        vector<vector<int>> v(n, vector<int>(m));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++) cin>>v[i][j];
        }
        for(int i=1; i<n-1; i++){
            for(int j=1; j<m-1; j++){
                if(v[i][j]>4){f=0; break;}
                else{
                    v[i][j]=4;
                }
            }
        }
        if(f){
            if(v[0][0]>2 || v[0][m-1]>2 || v[n-1][0]>2 || v[n-1][m-1]>2) f=0;
            v[0][0]=2;
            v[0][m-1]=2;
            v[n-1][0]=2;
            v[n-1][m-1]=2;
            if(f){
                for(int i=1; i<n-1; i++){
                    if(v[i][0]>3 || v[i][m-1]>3){f=0; break;}
                    else{
                        v[i][0]=3;
                        v[i][m-1]=3;
                    }
                }
                if(f){
                    for(int i=1; i<m-1; i++){
                        if(v[0][i]>3 || v[n-1][i]>3){f=0; break;}
                        else{
                            v[0][i]=3;
                            v[n-1][i]=3;
                        }
                    }
                }
            }
        }

        if(f){
            cout<<"YES\n";
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++) cout<<v[i][j]<<" ";
                cout<<endl;
            }
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}
