#include<iostream>
using namespace std;
int threadfn()
{
	cout<<"My thread";
}
int main()
{
 threadfn();
 return 0;		
}
