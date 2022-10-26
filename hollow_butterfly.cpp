#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        int empty_space=2*n-2*i;
        for(int j=1;j<=i;j++){
            if(j==1||j==i){
                cout<<"*";
            }
            else{
            cout<<" ";
            }
        }
        for(int j=1;j<=empty_space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            if(j==1||j==i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        int empty_space=2*n-2*i;
        for(int j=1;j<=i;j++){
            if(j==1||j==i){
                cout<<"*";
            }
            else{
            cout<<" ";
            }
        }
        for(int j=1;j<=empty_space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            if(j==1||j==i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

}
