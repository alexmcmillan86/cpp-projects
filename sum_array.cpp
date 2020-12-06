#include <iostream> 
using namespace std; 

int main() 
{ 
	int arr[] = { 1, 2, 3, 4, 5 };
	int sum = 0;

	for(int num : arr)
		sum += num;

	cout << "Sum of elements = " << sum;

	return 0; 
}