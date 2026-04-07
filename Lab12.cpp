//This Program is a number analysis into a table.
//Hunter Hughes 4-07-26
#include <iostream>
#include <iomanip>
using namespace std;

//Function prototypes and named constant
void fillArray(int[][6], int);
void printArray(int[][6], int);
void printTotals(int[][6], int);
const int ROW_SIZE = 5;

//Main function creates the array and calls the functions
int main()
{
	//Gretting
	cout << "Hi, I'm a Program that Will find the sum of number you set into a table" << endl;

	//Create array
	int numbers [ROW_SIZE][6];

	//Call the Functions
	fillArray(numbers, ROW_SIZE);
	printArray(numbers, ROW_SIZE);
	printTotals(numbers, ROW_SIZE);

	return 0;
}

//This function fills the array with numbers from the User
void fillArray(int numbers[][6], int ROW_SIZE)
{
	//Loop to go from one row to the next
	for (int i = 0; i < ROW_SIZE; i++)
	{
		//loop to fill each column of the row with user imput
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

//This function prints the totals of each  column
void printTotals(int numbers[][6], int ROW_SIZE)
{
	//Print a dotted line to seperate table from totals
	cout << " -----------------------------" << endl;

	//Loop to print the total of each column
	for (int col = 0; col < 6; col++)
	{
		int total = 0;
		for (int row = 0; row < ROW_SIZE; row++)
		{
			total += numbers[row][col];
		}
		cout << setw(5) << total;
	}
}