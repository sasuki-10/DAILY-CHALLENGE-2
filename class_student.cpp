#include<iostream>
using namespace std;
class student
{
    public:
    int roll_num;
    string name;
    float marks;
    
};
int main()
{
    student obj;
    obj.roll_num=235461;
    obj.name="Tripti";
    obj.marks=8.5;
    
    cout<<obj.roll_num<<endl;
    cout<<obj.name<<endl;
    cout<<obj.marks;

}
