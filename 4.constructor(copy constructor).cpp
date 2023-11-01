#include<iostream>
using namespace std;
class demo
{
	int a;
	public:
	demo()
	{
		a=10;
	}
	demo(demo &z)
	{
		a=z.a;
	}
	int putdata()
	{
		cout<<a<<endl;
	}
};
int main()
{
	demo aa;
	demo bb(aa);
	demo cc=bb;
	aa.putdata();
	bb.putdata();
	cc.putdata();
}
	
	
	
