#include <cstdlib>
#include <iostream>
using namespace std;

void palindromeChecker(char inArray[], int lowIndex, int highIndex)
{
	if(lowIndex >= highIndex)                                          //Checks case for when the low & high meet or cross over one another
	{
		cout << "Looks like a palindrome to me." << endl;              //Output based on passing of recursive tests
	}
	else                                                               //If there is still more to examine from the char array
	{
		if ( inArray[lowIndex] != inArray[highIndex] )                 //Checks if low array index value inequal to high array index value
		{
			cout << "Doesn't look like a palindrome to me" << endl;    //Cannot be a palindrome if true, so it tells the user
		}
		else                                                           //Continues through if low/high array index values are equal    
			palindromeChecker(inArray, ++lowIndex, ++highIndex);       //Calls recursion of function with same character array, incremented low index, and decremented high index
	}
}
main()
{
	char inputArray[50];
	cout << "This program checks input to see if it is a palindrome (only considers alpha characters a-z, case insensitive)" << endl;
	cout << "Please enter text to see if it is a palindrome: " << endl << "---->";
	cin >> inputArray;
	cout << "You entered " << inputArray << endl;
}
