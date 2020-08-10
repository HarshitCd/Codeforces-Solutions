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

            /*for(int j=0;j<arr.size();j++)
                cout<<arr[j]<<"\t";
            cout<<endl;*/
        }
        }
    for(int i=b;i<=e;i++)
    {
        swap(arr[b],arr[i]);
        //if(valid(arr))
        permuter(arr,b+1,e);
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
    int n;n=20;
    vector<int> arr(n,0);
    for(int i=1;i<=n;i++)
    arr[i-1]=i;
    permuter(arr,0,n-1);
    cout<<c<<endl;
    c=0;
}
/*
Number of solutions are: 1
Number of solutions are: 2
Number of solutions are: 3
Number of solutions are: 8
Number of solutions are: 10
Number of solutions are: 36
Number of solutions are: 41
Number of solutions are: 132
Number of solutions are: 250
Number of solutions are: 700
Number of solutions are: 750
Number of solutions are: 4010
Number of solutions are: 4237
Number of solutions are: 10680
Number of solutions are: 24679
*/
