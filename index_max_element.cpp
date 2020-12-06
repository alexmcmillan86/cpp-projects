#include <iostream> 
#include <algorithm>
using namespace std; 

int main() 
{ 
	int arr[] = { 100, 254, 36, 5, 256, 10, 50, 80, 105, 42 };
  	const int len = sizeof(arr) / sizeof(arr[0]);

	int index = distance(arr, max_element(arr, arr + len));

  	cout << "Index of max element: " << index << endl;

	return 0; 
}