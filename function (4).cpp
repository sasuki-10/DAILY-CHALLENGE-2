#include <iostream>
using namespace std;
void print_Min(int arr[5]);
int main()
{
    int ar[5] = { 30, 10, 20, 40, 50 };
    print_Min(ar); // passing array to function
}
void print_Min(int arr[5])
{
    int min = arr[0];
    for (int i = 0; i < 5; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    cout << "Minimum element is: " << min << "\n";
}
