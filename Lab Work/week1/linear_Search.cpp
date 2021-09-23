#include<iostream>
using namespace std;
int main()
{
    int n,i,t,k,j,m;
    cin>>t;
    for(m=0;i<t;m++)
    {
        cin>>n;             //enter size of array
        int a[n];
        for(j=0;j<n;j++)    // input the array
        {
            cin>>a[j];
        }
        cin>>k;                //enter the key
        for(i=0;i<n;i++)       // linear search
        {
            if(a[i] == k)
            {
                cout<<" yes index "<<i<<endl;
                break;
            }
        }
        if(i == n)
        {
            cout<<" no! "<<endl;
        }
    
    }
    return 0;
}