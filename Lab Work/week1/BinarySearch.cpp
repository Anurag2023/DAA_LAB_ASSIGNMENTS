#include<iostream>
using namespace std;
int main()
{
    int  i,j,key,l=0,h,mid;
    int t,count=0,x=0,n;
    cin>>t;     //enter test case
    for(j=0;j<t;j++)
    {
        cin>>n;     //enter array size
        int arr[n];
        h=n;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];        //enter elements of array
        }
        cin>>key;           //enter key
        while(1<=h)
        {
            mid = l + (h-(l/2));
            if(key == arr[mid])
            {
                count++;
                cout<<"present "<<count<<endl;
                x++;
                break;
            }
            else if(key < arr[mid])
            {
                h = mid-1;
                count++;
            }
            else if(key > arr[mid])
            {
                l = mid+1;
                count++;
            }
        }
        if(x == 0)
        {
            cout<<"not present "<<count<<endl;
        }
    } 
    return 0;
}