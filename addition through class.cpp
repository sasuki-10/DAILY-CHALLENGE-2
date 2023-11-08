#include<iostream>
using namespace std;
class addition
{
    public:
    int sum,a,b;
    int set_sum(int a,int b)
   {
    return (a+b);
   }
};
    int main()
{
    addition tr;
    tr.set_sum(10,2);
    cout<<tr.sum<<endl;  
}
