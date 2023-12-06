#include<iostream>
using namespace std;
int main()
{
 int arr1[5];
 int i;
 cout<<"array elements are:";
 for(i=0;i<=4;i++)
   {
      cin>>arr1[i];
   }
	
cout<<"*********************FOR DISPLAYING***************";

for(i=4;i>=0;i--)
    {
	cout<<arr1[i]<<endl;
    }
}
