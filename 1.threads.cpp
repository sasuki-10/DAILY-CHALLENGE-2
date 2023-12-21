#include<iostream>
#include<thread>
using namespace std;
int threadfn()
{
  cout<<"My thread";
}
int main()
{
 thread t1(threadfn);
 t1.join();   //synchronising process
 return 0;
}
