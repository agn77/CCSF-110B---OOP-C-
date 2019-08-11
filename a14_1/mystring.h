// Alberto Gonzalez Navarro
// CS110B Assignment 14.1
// Professor Harden
// May 1st 2017
// 




#pragma once
#ifndef mystring_h
#define mystring_h
#pragma warning(disable:4996)

#include <iostream>
#include "stdafx.h"






/*
	This MyString class contains 1 data memeber, a c-string,
	which is created dynamically.


MyString();
pre: default constructor with no parameter input or return
post: intializes data the 'obj' data member with 
	  memory of size 1 and copying it to an empty string

MyString(const char *inObj);
pre: intakes one argument and Points to char object 'inObj' 
post: 


MyString(const MyString &right);
pre: copy constructor which intakes one argument 
	and references MyString const object 'right'
post: Object is created with a size + 1 from specified object
	 referenced at input

~MyString();
post: Destroys MyString object 

char operator[](int index)const;
pre: Contains value of index from input argument
post: Index of MyString is returned with location of const char

char& operator[](int index);
pre: Contains value of index from input argumnet
post: Index of MyString is returned with location of char

long length()const;
post: returns length of MyString object

friend std::ostream& operator<<(std::ostream& out, const MyString& source);
pre: ostream output
post: outputs the source object by reference 

friend std::istream& operator>>(std::istream& in, MyString& source);
pre: istream input 
post: inputs the source by reference 

friend bool operator>(const MyString &left, const MyString &right);
pre: Contains address to MyString objects, 'left' and 'right.'
post: Returns true if left>right, else returns false

friend bool operator<(const MyString &left, const MyString &right);
pre: Contains address to MyString objects, 'left' and 'right.'
post: Return true if left<right, else returns false

friend bool operator>=(const MyString &left, const MyString &right);
pre: Contains address to MyString objects, 'left' and 'right.'
post: Returns true if left is greater than or equal to right, else
	 returns false.

friend bool operator<=(const MyString &left, const MyString &right);
pre: Contains address to MyString objects, 'left' and 'right.'
post: Returns true if left is less than or equal to right, else
      returns false. 

friend bool operator==(const MyString &left, const MyString &right);
pre: Contains address to MyString objects, 'left' and 'right.'
post: Returns true if left is equal to right, else returns false.

friend bool operator!=(const MyString &left, const MyString &right);
pre: Contains address to MyString objects, 'left' and 'right.'
post: Returns true if left is not equalt to right, else returns false.

friend MyString operator+(const MyString& left, const MyString& right);
pre: Contains address to MyString objects, 'left' and 'right.'
post: Returns addition of 'left' and 'right' MyString objects.

MyString operator=(const MyString& right);
pre: Input argument containing 'right' MyString object.
post: Returns pointer created by combination of concatenation
      and the assignment operator. 

MyString operator+=(const MyString& right);
pre: Input argument containing 'right' MyString object can be either
     a char value or a string with constnt value. 
post: Returns the combination of the calling object and the
     concatenate. The MyString object is reallocated with the
	 appropiate space. 

void read(std::istream& inString, char delimtr);
pre: void input of two arguments, inString and delimeter character. 
post: Reads each character in loop while using the in.getline()
	  function to read the input in a non-dynamic array, then uses
	  the strcpy() to copy it into the data member. 



*/


namespace cs_mystring {

	class MyString{

	private:
		char *obj;
	public:
		MyString();
		MyString(const char *inObj);
		MyString(const MyString &right);
		~MyString();
		char operator[](int index)const;
		char& operator[](int index);
		long length()const;
		friend std::ostream& operator<<(std::ostream& out, const MyString& source);
		friend std::istream& operator>>(std::istream& in, MyString& source);
		friend bool operator>(const MyString &left, const MyString &right);
		friend bool operator<(const MyString &left, const MyString &right);
		friend bool operator>=(const MyString &left, const MyString &right);
		friend bool operator<=(const MyString &left, const MyString &right);
		friend bool operator==(const MyString &left, const MyString &right);
		friend bool operator!=(const MyString &left, const MyString &right);
		friend MyString operator+(const MyString& left, const MyString& right);
		MyString operator=(const MyString& right);
		MyString operator+=(const MyString& right);
		void read(std::istream& inString, char delimtr);
	};

}

#endif






/* ANYTHING BELOW THIS LINE IS CODE OUTPUT!
----- Testing basic String creation & printing
string [0] = Wow
string [1] = C++ is neat!
string [2] =
string [3] = a-z

----- Now reading MyStrings from file

----- first, word by word
Read string = The
Read string = first
Read string = time
Read string = we
Read string = will

Read string = read
Read string = individual
Read string = words,
Read string = next
Read string = we
Read string = read
Read string = whole
Read string = lines

----- now, line by line
Read string = The  first  time  we  will
Read string =     read individual words, next
Read string = we read whole lines

----- Testing access to characters (using const)
Whole string is abcdefghijklmnopqsrtuvwxyz
now char by char: abcdefghijklmnopqsrtuvwxyz
----- Testing access to characters (using non-const)
Start with abcdefghijklmnopqsrtuvwxyz and convert to ABCDEFGHIJKLMNOPQSRTUVWXYZ

----- Testing relational operators between MyStrings
Comparing app to apple
Is left < right? true
Is left <= right? true
Is left > right? false
Is left >= right? false
Does left == right? false
Does left != right ? true
Comparing apple to
Is left < right? false
Is left <= right? false
Is left > right? true
Is left >= right? true
Does left == right? false
Does left != right ? true
Comparing  to Banana
Is left < right? true
Is left <= right? true
Is left > right? false
Is left >= right? false
Does left == right? false
Does left != right ? true
Comparing Banana to Banana
Is left < right? false
Is left <= right? true
Is left > right? false
Is left >= right? true
Does left == right? true
Does left != right ? false

----- Testing relations between MyStrings and char *
Comparing he to hello
Is left < right? true
Is left <= right? true
Is left > right? false
Is left >= right? false
Does left == right? false
Does left != right ? true
Comparing why to wackity
Is left < right? false
Is left <= right? false
Is left > right? true
Is left >= right? true
Does left == right? false
Does left != right ? true

----- Testing concatentation on MyStrings
outrageous + milk = outrageousmilk
milk +  = milk
+ cow = cow
cow + bell = cowbell

----- Testing concatentation between MyString and char *
abcde + XYZ = abcdeXYZ
XYZ + abcde = XYZabcde

----- Testing shorthand concat/assign on MyStrings
who += what = whowhatandwhowhat
what += WHEN = whatWHENandwhatWHEN
WHEN += Where = WHENWhereandWHENWhere
Where += why = WherewhyandWherewhy

----- Testing shorthand concat/assign using char *
I love  += programming = I love programming

----- Testing copy constructor and operator= on MyStrings
original is cake, copy is fake
original is cake, copy is fake
after self assignment, copy is Copy Cat
Testing pass & return MyStrings by value and ref
after calling Append, sum is BinkyBoo
val is winky
after assign,  val is BinkyBoo
Press any key to continue . . .





*/
