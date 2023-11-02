#include<iostream>
#include<thread>
using namespace std;
int threadfn(int value)
{
	cout<<"My thread"<<endl;
	cout<<"Value is:"<<value;
}
int main()
{
 thread t1(threadfn,100);
 t1.join();   //synchronising process
 return 0;
}
