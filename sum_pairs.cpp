#include <iostream> 
using namespace std; 

// function prototype
void printPairs(int arr[], int n, int sum);

int main() 
{ 
    int arr[] = { 1, 5, 7, -1, 8 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 6;
    printPairs(arr, n, sum);
    return 0;
}

void printPairs(int arr[], int n, int sum) {
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            if(arr[i] + arr[j] == sum)
                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
}