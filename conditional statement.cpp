#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter the value of a:  ";
	cin>>a;
	cout<<"enter the value of b:  ";
	cin>>b;
	cout<<"enter the value of c:  ";
	cin>>c;
	(a>b&&c)?cout<<("a is largest") :(b>a&&c)?cout<<("b is largest") :cout<<("c is biggest");
}
