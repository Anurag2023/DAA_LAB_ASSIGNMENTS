#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t, key, n, i, j, m , x=0, count=0;
    int start, end;
     
    cin>>t;                            //enter test case
    
    for(j=0; j < t; j++)
    {
        cin>>n;                        //enter array size
        int arr[n];
        
        for(i = 0 ;i < n ;i++)         //enter array elements
        {
            cin>>arr[i];
        }
        
        cin>>key;                       //enter key
        
        start = 0, end = sqrt(n);
        while(arr[end] <= key && end < n)
        {
            start = end;
            end += sqrt(n);
            if(end > n-1)
            {
                end = n;
            }
            count++;
        }
        for(i = start; i < end; i++)
        {
            count++;
            if(arr[i] == key)
            {
                cout<<"present "<<count<<endl;
                x = 1;
                break;
            }
        }
        if(x == 0)
        {
            cout<<"not present "<<count<<endl;
        }

    }

    return 0;
}