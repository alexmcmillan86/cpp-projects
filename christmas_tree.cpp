#include <iostream> 
using namespace std; 

// Draws a christmas tree shape on the console
/* For example, as below:

     *
    ***
   *****
  *******
 *********
***********
    |||

*/

int main() 
{ 
	int rows = 7;

	// iterating for each row
	for(int i = 0; i < rows; i++) {
		// filling in spaces
		for(int j = 0; j < rows - i - 1; j++) cout << " ";	// filling in spaces
		for(int k = 0; k < (2 * i) + 1; k++) cout << "*";	// filling in stars
		cout << endl;	// stepping to newline
	}

	// drawing tree trunk
	for(int i = 0; i < rows + 1; i++)
		(i == rows - 2 || i == rows - 1 || i == rows) ? cout << "|" : cout << " ";

	return 0; 
} 
