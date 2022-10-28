#include <iostream>
using namespace std;
int n;

int partition(int *arr,int lb,int ub)
{
    int i=lb,j=ub,pivot=arr[lb];
    while(i<j)
    {
        while(arr[i]<=pivot)
            i++;
        while(arr[j]>pivot)
            j--;
        if(i<j)
            swap(arr[i],arr[j]);
    }
    swap(arr[j],arr[lb]);
    return j;

}

void quicksort(int *arr,int lb,int ub)
{
    if(lb<ub)
    {
        int pos=partition(arr,lb,ub);
        quicksort(arr,lb,pos-1);
        quicksort(arr,pos+1,ub);
    }
}

int main()
{

    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
	
    quicksort(arr,0,n-1);
    
	for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}

