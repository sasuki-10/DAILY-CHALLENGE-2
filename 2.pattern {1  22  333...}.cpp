#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	printf("ENTER THE VALUE:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}
