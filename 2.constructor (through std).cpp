#include<iostream>
class A
{
public:
	A()                   //same name of class  {default constructor}
		{
		   std::cout<<"C++";// std::cout if "using namespace" not written
		}
};
int main()
{
	A obj;                  //object invoked
}
