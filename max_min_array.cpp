#include <iostream> 
#include <algorithm>
using namespace std; 

int main() 
{ 
	int arr[] = { 100, 254, 36, 42, 5, 10, 50, 80, 105, 256 };
	int len = sizeof(arr) / sizeof(arr[0]);

	auto smallest = min_element(arr, arr + len);
	auto largest = max_element(arr, arr + len);

	cout << "Smallest element is " << *smallest << endl;
	cout << "Largest element is " << *largest;

	return 0; 
}