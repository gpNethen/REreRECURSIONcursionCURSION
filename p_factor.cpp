#include <iostream>
#include <cmath>       
using namespace std;

void p_factor(int entry)
{	
	if(entry != 1)                  //Checks for absence of base case
	{	
		int count = 2;              //Initializes counter variable
		while (entry%count!=0)      //Checks to see if input divisible by count
			count++;
		cout << " " << count << " ";     //Leave these in program if you want
		if (entry/count !=1)             //Program to print prime factors
		cout << " * ";                   //Smallest to largest
		p_factor(entry/count);	
		//if (entry/count !=1)           //Leave these in program if you want
		//cout << " * ";                 //Program to print prime factors
		//cout << " " << count << " ";   //Largest to smallest
	}
}
main()
{
	int num;
	cout << "This program displays the prime factorization of an integer." << endl;
	cout << "Please enter a positive integer greater than 1:" << endl << "     ----> ";
	cin >> num;
	cout << num << " = ";
	p_factor(abs(num));
	return 0;
}
