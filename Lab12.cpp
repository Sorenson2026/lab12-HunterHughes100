//This Program is a number analysis into a table.
//Hunter Hughes 4-07-26
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

//Function prototypes and named constants
void fillArray(int[][6], int);
/*void printArray(int[][COL_SIZE], int);
void printTotals(int[][COL_SIZE], int);*/
const int ROW_SIZE = 5;

//Main function creates the array and calls the functions
int main()
{
	//Gretting
	cout << "Hi, I'm a Program that Will find the sum of number you set into a table" << endl;

	//Create array
	int numbers [ROW_SIZE][6];

	//Call Functions
	fillArray(numbers, 5);
	/*printArray(numbers, COL_SIZE);
	printTotals(numbers, COL_SIZE);*/

	return 0;
}

//This function fills the array with numbers from the User
void fillArray(int numbers[][6], int ROW_SIZE)
{
	for (int i = 0; i < ROW_SIZE; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << "Please enter a number for Row " << i + 1 << " Column " << j + 1 << ": ";
			cin >> numbers[i][j];
		}
	}
}