#include<iostream>
using namespace std;
class good{
	public:
		int x;
		void getdata()
		{
			cout<<"Enter any number: "<<endl;
			cin>>x;
		}
		void putdata()
		{
			cout<<x;
		}
		void operator ++()
		{
			x=x+1;
			
		}
	
};
int main()
{
	good t1;
	t1.getdata();
	cout<<"changed value"<<endl;
	++t1;
	t1.putdata();
	return 0;
	}
