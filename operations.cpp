#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int b=20;
	
	a=b;
	cout<<"a=b: "<<a;
	
	a+=b;                      //a=a+b
	cout<<"\na+=b: "<<a;
	
	a-=b;                      //a=a-b
	cout<<"\na-=b: "<<a;
	
	a*=b;
	cout<<"\na*=b: "<<a;
	
	a/=b;
	cout<<"\na/=b: "<<a;
	
	return 0;
	
}
