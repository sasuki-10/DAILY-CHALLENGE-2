#include<iostream>
using namespace std;
class profile
{
  public:
  string name;
  int id;	
  void printname();
 
   void print_name()
   {
  	cout<<"name is:"<<name;
   }
};

void profile::printname()
{
cout<<"Id is:"  <<id;
}
int main()
{ 	 
profile tr;
tr.name="tripti";
tr.id=24;

tr.printname();
cout<<endl;
tr.print_name();
return 0;

}




