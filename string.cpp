#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	string s1;
	string s2;
	
	cin>>s1;
	cin>>s2;
	
	int l1,l2;
	l1=s1.size();
	l2=s2.size();
	
	cout<<l1<<" "<<l2<<endl;
	cout<<s1+s2<<endl;
	
	char x=s1[0];
	s1[0]=s2[0];
	s2[0]=x;
	
	cout<<s1<<" "<<s2<<endl;
	
	return 0;
	
	
}
