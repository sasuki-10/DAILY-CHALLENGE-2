#include<iostream>
using namespace std;
int main()
{
    int a,b;
  cout<<"Enter a:";          //KEY CONCEPT;ternary operator{(condition)?check1:check2}
	cin>>a;
	cout<<"Enter b:";
	cin>>b;
	(a>=b)?cout<<"a is bigger":cout<<"b is bigger";
	return 0;
}
