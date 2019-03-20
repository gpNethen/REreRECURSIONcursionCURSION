#include <iostream>
using namespace std;

//Parameters: number of discs, source peg#, destination peg#
void hanoi(int discNum, int source, int destination)
{
	if(discNum == 0)    //Checks for simplest base case
	{
  		cout << "No discs to move, unfortunately." << endl;
	}
	else if(discNum == 1) //Checks for another simple base case
	{
		cout << "Move disc from peg " << source << " to peg " << destination << endl;
	}
	else
	{
		hanoi(discNum - 1, source, 6-destination-source); //Moves top discs to spare peg
		cout << "Move disc from peg " << source << " to peg " << destination << endl;
		hanoi(discNum - 1, 6-destination-source, destination); //Moves spares to destination
	}
}

int main()
{
  int disc_count;
  cout << "***********       Towers of Hanoi Instructor       ***********" << endl;
  cout << "Please enter number of discs to move (Non-negative integer): " << endl << "     ----> ";
  cin >> disc_count;
  hanoi(disc_count, 1, 3);
  return 0;
}
