#include<bits/stdc++.h>
using namespace std;

void next_greater(int *arr,int n)
{
    int arr1[n];
    stack<int> s;
	
    for(int i=n-1;i>=0;i--)
    {
        while(!s.empty()&&s.top()<=arr[i])
            s.pop();
        if(s.empty())
            arr1[i]=-1;
        else
            arr1[i]=s.top();
        s.push(arr[i]);
    }
	
    for(int i=0;i<n;i++)
        cout<<arr1[i]<<" ";
}

int main()
{
    int n;
    cout<<"Enter No of Elements:";
    cin>>n;
    int arr[n];
	
    cout<<"Enter Data:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
	
    next_greater(arr,n);
}
