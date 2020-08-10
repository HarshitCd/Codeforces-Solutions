#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int>& m, vector<int>& v, int s, int& a){

    if(a==0){
        if(v[s]!=1){
            v[s]=1;
            dfs(m, v, m[s], a);
            v[s]=0;
        }
        else{cout<<s+1<<" "; a=1;}
    }

}

int main(){
    int n, a;
    cin>>n;
    vector<int> v(n);
    vector<int> m(n);

    for(int i=0; i<n; i++){
        cin>>a;
        a--;
        m[i] = a;
        //m[a].push_back(i);
    }


    a=0;
    for(int i=0; i<n; i++){
        v[i]=1;
        dfs(m, v, m[i], a);
        a=0;
        v[i]=0;
    }

}
