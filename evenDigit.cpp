#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

void evenDigit(int n)
{
	if(n<10)                  //Checks for first part of "base case"
	{
		if( n%2 == 0 )        //Checks if digit is even
			cout << n << endl;//Outputs base case base case digit if even
	}
	else                     //Code for not base case
	{
		if ( (n%10)%2==0 )   //Checks end digit of input to see if even
		{
			cout << n%10;    //Outputs that digit if even
			evenDigit(n/10); //Calls recursion of function with last digit truncated
		}
		else                 //Code that has no output (for odd digits)        
			evenDigit(n/10); //Calls recursion of function with last digit truncated
	}
}
main()
{
	int num;
	cout << "This program returns even digits of an integer in reverse order." << endl;
	cout << "Please enter an integer: " << endl << "---->";
	cin >> num;
	cout << "You entered " << num << endl;
	cout << "Your even digits in reverse: ";
	evenDigit(abs(num));
	cout << endl;
}
