#include<thread>
using namespace std;
int threadfn(int value)
{
	cout<<"My thread";
	cout<<"Value is:"<<value;
}
int main()
{
 int local_variable=10;
 thread t1(threadfn,local_variable);
 t1.join();   //synchronising process
 return 0;
}
