#include<bits/stdc++.h>
using namespace std;

/*void display(vector<vector<int>>& v){
    for(auto x: v){
        for(auto y: x) cout<<setw(3)<<y<<" ";
        cout<<endl;
    }
}*/

int main(){
    int n, m, s=0;
    cin>>n>>m;
    vector<vector<int>> v(n, vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0;  j<m; j++) cin>>v[i][j];
    }
    for(int i=n-1; i>=0; i--){
        //s+=v[i][m-1];
        for(int j=m-1; j>=0; j--){
            if(v[i][j]==0){v[i][j]=min(v[i][j+1]-1, v[i+1][j]-1);}
            else if((j<m-1 && v[i][j+1]<=v[i][j]) || (i<n-1 && v[i+1][j]<=v[i][j])){cout<<-1; return 0;}
            s+=v[i][j];
        }
    }
    //display(v);
    cout<<s;
    return 0;
}
