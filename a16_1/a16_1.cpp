// Alberto Gonzalez Navarro
// CS110B Assignment 16.1
// Professor Harden
// May 15th, 2017
//
// This assignment involves using a recursion method to
// reverse a char array and a string. The function to 
// reverse the char array is reverseWithinBouds and
// reverseCstring for the array




#include "stdafx.h"
#include <iostream>




using namespace std;

void reverseWithinBounds(char* in, int start, int finish);


void reverseWithinBounds(char* in, int start, int finish)
{
	if (start > finish)
		//nothing returns if start is greater than finish
		return;

	else {

		//using swap funtion to swap the characters
		// in each location and calling the recursive fucntion
		// to swap the start + 1 and the finish - 1 until 
		// the middle of the array has been reached.
		swap(in[start], in[finish]);
		reverseWithinBounds(in, start + 1, finish - 1);
	}
	
}


void reverseCstring(char Cstring[])
{
	// setting new bounds in order to call the reverseWithinBounds
	// to reverse to string length.
	int new_firstb = 0;
	int new_lastb = strlen(Cstring) - 1;

	reverseWithinBounds(Cstring, new_firstb, new_lastb);
}






int main()
{
	// declaring first and last bound for use with
	// recursive function
	int firstb;
	int lastb;
	const int SIZE = 15;

	char characters[SIZE] = { 'A', 'B', 'C', 'D', 'E' };

	char Cstring[] = "c++ rocks!\n";
	
	cout << " Please input the first bound \n";
	cin >> firstb;
	cout << " Input the second bound: \n";
	cin >> lastb;

	reverseWithinBounds(characters,firstb, lastb);


	//output of the reversed char array
	cout << "\n Reversed output from given bounds: " 
		<< characters << "\n\n";

	// calling the reverseCstring function to reverse 
	// the C-string

	 cout << " \nC-string being reversed: " << Cstring << "\n";
	reverseCstring(Cstring);

	//out of reverse C-string
	cout << " Reversed C-string: " << Cstring << "\n";

	system("PAUSE");

    return 0;
}



/*ANYTHING BELOW THIS LINE IS CODE OUTPUT

Please input the first bound
1
Input the second bound:
4

Reversed output from given bounds: AEDCB


C-string being reversed: c++ rocks!

Reversed C-string:
!skcor ++c
Press any key to continue . . .


*/