#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
	
	// taking input
    for(int i=0;i<n;i++)
        cin>>arr[i];
	
	//insertion sort algo
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int val=arr[i];
        while(arr[j]>val&&j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=val;
    }
	
	//printing result
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    
	return 0;
}
