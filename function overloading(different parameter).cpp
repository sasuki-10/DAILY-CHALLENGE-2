#include<iostream>
using namespace std;
class add{
	public:
		int sum(int a,int b)
		{
			int c;
			c=a+b;
			cout<<"sum of 1st function:"<<c<<endl;
		}
		float sum(float a,float b,float c)
		{
			float d;
			d=a+b+c;
			cout<<"sum of 2nd function:"<<d;
		}
	
};
int main()
{
	add s1;
	s1.sum(5,2);
	s1.sum(5.0,12.0,12.0);
	return 0;
}
