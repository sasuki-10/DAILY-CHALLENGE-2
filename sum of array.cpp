#include<iostream>
using namespace std;
int main()
{
 int arr1[5];
 int arr2[5];
 int i,sum1=0,sum2=0;

  cout<<"First array elements are:";
 for(i=0;i<=4;i++)
 {
 	cin>>arr1[i];
 	sum1=sum1+arr1[i];
 }

  cout<<"\nSum of first array is:"<<sum1<<endl;
 
/*FOR ARRAY 2nd*/

 cout<<"Second array elements are:";
 for(i=0;i<=4;i++)
 {
  	cin>>arr2[i];
 	  sum2=sum2+arr2[i];
 }
 
  cout<<"\nSum of second array:"<<sum2<<endl;
 
}
