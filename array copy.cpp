#include<iostream>
using namespace std;
int main()
{
 int arr1[5];
 int arr2[5];
 int i;

cout<<"array elements are:";
    
	for(i=0;i<5;i++)
      {
 	        cin>>arr1[i];
 		arr2[i]=arr1[i];
      }	

cout<<"\n/*******DISPLAYING***********/";
	
	for(i=0;i<5;i++)
       {
 	cout<<arr2[i]<<endl;
       }
}
