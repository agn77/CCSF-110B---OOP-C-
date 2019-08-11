// Alberto Gonzalez Navarro
// CS110B Assignment # 8.1
// Professor Harden
// 3/13/17
//
// This program is a remake of a high scores
// game. This version of the program uses structures
// to store data as well as 3 different functions to initialize,
// sort, and display the data in descending order.
//






//#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cstring>






struct highscore
{
    int score;
    char name[24];

};






using namespace std;

void initializeData(highscore scores[], int size);
void sortData(highscore scores[], int size);
void displayData(const highscore scores[], int size);






int main()
{
    char repeat = 'y';
	int input;

	// while loop used to ask the user if they would look
	// like to run the program again without exiting the compiler.
    while(repeat == 'y' || repeat == 'Y')
    {

	cout << " How many scores will you enter?: \n";
	cin >> input;
	cin.ignore();

	// highscore pointer
	highscore *ptr;

	// new dynamic array to store the highscore structs.
	ptr = new highscore[input];

	// calling the functions
	initializeData(ptr, input);
	sortData(ptr, input);

	cout << " \nTop Scorers: \n";
	displayData(ptr, input);

	// asking the user if he would like to run the program again
	// or terminate it.
	cout << " Would you like to input a new set of data?(y/n) \n";
	cin >> repeat;
    }


}






// This functions asks for the user input using the
//  cin.getline() function for the char array and
// also uses the cin.ignore() to be able to run the
// cin.getline() function as many times as needed.
// The for loop reapeats itself for the amount of
// data the user wishes to input
void initializeData(highscore scores[], int size)
 {
	int i;

	for (i = 0; i < size; i++) {

		cout << " Enter the name for score #" << i + 1 << ": ";
		cin.getline(scores[i].name, 24);

		cout << " Enter the score for score #" << i + 1 << ": ";
		cin >> scores[i].score;

		cin.ignore();
	}

}






// This function sorts the scores in the dynamically
// allocated array and uses the swap() function
// to swap the values from largest to smallest.
void sortData(highscore scores[], int size)
{

    int i;
    int j;
    int k;
    int index;

        for (i = 0; i < (size - 1); i++)
        {
            j = i;
            k = scores[i].score;

            for (index = i + 1; index < size; index++)
            {
                if (scores[index].score > k)
                {
                    k = scores[index].score;
                    j = index;
                }
            }
		swap(scores[j], scores[i]);
        }
}






// This functions displays the data using a for loop.
void displayData(const highscore scores[], int size)
 {

	for (int i = 0; i < size; i++)
    {
		cout << scores[i].name << ": " << scores[i].score << "\n";
	}

}

