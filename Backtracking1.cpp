#include<bits/stdc++.h>
using namespace std;

int c=0;


void luckyorder(vector<int> &v, int m, vector<int> &u, int &n){
    if(m==n){
        /*cout<<"\nSolution "<<setw(3)<<c<<": ";
        for(int x: u) cout<<setw(2)<<x<<" ";*/
        c++;
        return;
    }
    for(int i=1; i<=n; i++){
        if(v[i-1]==0) continue;
        else if((m+1)%i==0 || i%(m+1)==0){
            v[i-1]=0;
            u[m]=i;
            luckyorder(v, m+1, u, n);
            v[i-1]=i;
        }
    }
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    vector<int>v(n), u(n);
    for(int i=0; i<n; i++) v[i]=i+1;
    luckyorder(v, 0, u, n);
    cout<<"\nNumber of solutions are: "<<c<<endl;
    c=0;

    return 0;
}
/*
1939684
1099390

#include<bits/stdc++.h>
using namespace std;

int c=0;

int valid(vector<int> arr)
{
    for(int i=1;i<=arr.size();i++)
    {
        if(arr[i-1]%i!=0 && i%arr[i-1]!=0)
            return 0;
    }
    return 1;
}

void permuter(vector<int> arr,int b,int e)
{
    if(b==e)
        {
        if(valid(arr))
        {
            c++;
            /*
            for(int j=0;j<arr.size();j++)
                cout<<arr[j]<<"\t";
            cout<<endl;
        }
        }
    for(int i=b;i<=e;i++)
    {
        swap(arr[b],arr[i]);
        if(valid(arr))
        {permuter(arr,b+1,e);}
        swap(arr[i],arr[b]);
    }
}
void printer(vector<int> ar)
{
    for(int i=0;i<ar.size();i++)
        cout<<ar[i]<<"\t";
    cout<<endl;
}

int main()
{
    //int n;cin>>n;
    vector<int> arr(20,0);
    for(int i=1;i<=20;i++)
        arr[i-1]=i;
    permuter(arr,0,19);
    cout<<c;
}
*/
