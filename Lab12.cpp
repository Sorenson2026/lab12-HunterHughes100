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
void printArray(int[][6], int);
//void printTotals(int[][6], int);
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
	printArray(numbers, 5);
	//printTotals(numbers, 5);

	return 0;
}

//This function fills the array with numbers from the User
void fillArray(int numbers[][6], int ROW_SIZE)
{
	//Loopto fill the arrayiwth use imput 1 element at a time
	for (int i = 0; i < ROW_SIZE; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << "Please enter a number for Row " << i + 1 << " Column " << j + 1 << ": ";
			cin >> numbers[i][j];
		}
	}
}

//This function prints the array in a table format
void printArray(int numbers[][6], int ROW_SIZE)
{
	//loop to print each row of the array
	for (int row = 0; row < ROW_SIZE; row++)
	{
		//Loop to print each element in the row with a width of 5
		for (int col = 0; col < 6; col++)
		{
			cout << setw(5) << numbers[row][col];
		}
		cout << endl;
	}
}