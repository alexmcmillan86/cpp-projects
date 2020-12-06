#include <iostream> 
using namespace std; 

// function prototype
int find_index(int arr[], int len, int seek);

int main() 
{
    int arr[5] = { 4, 1, 3, 2, 6 };
	int len = sizeof(arr) / sizeof(arr[0]);
    int index = find_index(arr, len, 2);
    cout << index << endl;    

	return 0; 
} 

int find_index(int arr[], int len, int seek)
{
    for(int i = 0; i < len; ++i)
    {
        if(arr[i] == seek) 
			return i;
    }

    return -1;
}
