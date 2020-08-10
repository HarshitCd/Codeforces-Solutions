#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int j=0; j<t; j++){
        long long n, k;
        int i, flag=0;
        cin>>n>>k;
        for(i=2; i<=sqrt(n); i++){
            if(n%i==0){
                flag++;
                break;
            }
        }
        if(flag==1){
            n+=i+(k-1)*2;
        }
        else{
            n+=n+(k-1)*2;
        }
        cout<<n<<endl;
    }
    return 0;
}
