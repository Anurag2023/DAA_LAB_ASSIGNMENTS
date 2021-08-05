#include<iostream>
using namespace std;
int main()
{
    int t,key,i,j,n,count=0;
    int l=0,h,mid,mid2;
    cin>>t;            //enter test case
    for(j=0; j<t ; j++)
    {
        cin>>n;         //enter size
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cin>>key;           //enter key
        h = n;
        count = 0;
        while(1<=h)
        {
            mid = l+((h-l)/2);
            if(arr[mid] == key)
            {
                mid2 = mid+1;
                while(arr[mid] == key)
                {
                    count++;
                    mid--;
                }
                while(arr[mid2] == key)
                {
                    count++;
                    mid2++;
                }
                break;
            }
            else if(arr[mid] < key)
            {
                h = mid-1;
            }
            else if(arr[mid] > key)
            {
                l=mid+1;
            }
        }
        if(count == 0)
        {
            cout<<"not present ";
        }
        if(count > 0)
        {
            cout<<key<<" - "<<count;
        }
    }
    return 0;
}