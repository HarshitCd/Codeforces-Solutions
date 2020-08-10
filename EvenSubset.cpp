#include<bits/stdc++.h>
using namespace std;

void Even_Subsets(vector<int>& v, int n){
    int i;
    for(i=0; i<n; i++){
        if(v[i]%2==0){
            cout<<"1\n"<<i+1<<endl;
            break;
        }
        else{
            if(i+1<n && v[i+1]%2==1){
                cout<<"2\n"<<i+1<<" "<<i+2<<endl;
                break;
            }
        }
    }
    //cout<<"--"<<i<<endl;
    if(i==n)
        cout<<-1<<endl;
}

int main(){
    int t, n, k=1;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        vector<int> v(n);
        for(int j=0; j<n; j++)
            cin>>v[j];
        Even_Subsets(v, n);
    }
    return 0;
}
