#include<iostream>
#include<cstdlib>
using namespace std;   
int main()
{
    int t,n,i,j,key,sum=0,count = 0;
    cin>>t;             //enter test case
    for(j=0;j<t;j++)
    {
        cin>>n;         //enter size of array
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cin>>key;       //enter key
        i=0,count=0;
        while(i<n)
        {
            for(j=i+1;j<n;j++)
            {
                sum = arr[i] - arr[j];
                sum = abs(sum);
                if(sum == key)
                {
                    count++;
                }
            }
            i++;
        }
        if(count > 0)
        {
            cout<<count<<endl;
        }
        else
        {
            cout<<"not present"<<endl;
        }
    }
    return 0;
}