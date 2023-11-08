#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=5;i>=0;i--)              //It shows upto how many rows pattern has to be updated
	{                                            
		for(j=1;j<=i;j++)             //It shows column.           
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
