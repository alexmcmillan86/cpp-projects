#include <iostream> 
using namespace std; 

int main() 
{ 
	int arr[10] = { 5, 8, 11, 18, 26, 55, 34, 22, 15, 60 };
	int n = sizeof(arr) / sizeof(arr[0]);
	double sum, arr_avg;

	for(int num : arr)  
		sum += num;

	cout << "Average = " << sum / n;

	return 0; 
} 
