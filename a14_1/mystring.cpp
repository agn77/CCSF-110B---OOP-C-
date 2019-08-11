// Alberto Gonzalez Navarro
// CS110B Assignment 14.1
// Professor Harden
// May 1st 2017
// 






#pragma warning(disable:4996)
#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <cassert>
#include "mystring.h"







using namespace std;

namespace cs_mystring {

	MyString::MyString()
	{

		obj = new char[1];
		strcpy(obj, "");
	}







	MyString::MyString(const char *inObj)
	{

		obj = new char[strlen(inObj) + 1];
		strcpy(obj, inObj);
	}






	MyString::MyString(const MyString& right)
	{

		obj = new char[strlen(right.obj) + 1];
		strcpy(obj, right.obj);
	}






	// Deconstructor, destroys MyString 
	MyString::~MyString()

	{
		delete[] obj;
	}







	MyString MyString::operator=(const MyString &right)
	{

		if (this != &right)
		{
			delete[] obj;
			obj = new char[strlen(right.obj) + 1];
			strcpy(obj, right.obj);
		}

		return *this;
	}







	char MyString::operator[](int index)const
	{

		assert(index >= 0 && index < strlen(obj));
		return obj[index];
	}







	char& MyString::operator[](int index)
	{

		assert(index >= 0 && index < strlen(obj));
		return obj[index];
	}







	// Returns length of the string
	long MyString::length()const
	{

		long length = strlen(obj);
		return length;
	}

	



	// steram insertion operator
	ostream& operator<<(ostream& out, const MyString& source)
	{

		out << source.obj;
		return out;
	}





	//Relational operators 
	bool operator>(const MyString &left, const MyString &right)
	{

		if (strcmp(left.obj, right.obj) > 0) {
			return true;
		}
		return false;
	}







	bool operator<(const MyString &left, const MyString &right)
	{

		if (strcmp(left.obj, right.obj) < 0) {
			return true;
		}
		return false;
	}







	bool operator>=(const MyString &left, const MyString &right)
	{

		if (strcmp(left.obj, right.obj) >= 0) {
			return true;
		}
		return false;
	}

	




	bool operator<=(const MyString &left, const MyString &right)
	{

		if (strcmp(left.obj, right.obj) <= 0) {
			return true;
		}
		return false;
	}







	bool operator==(const MyString &left, const MyString &right)
	{

		if (strcmp(left.obj, right.obj) == 0) {

			return true;
		}
		return false;
	}







	bool operator!=(const MyString &left, const MyString &right)
	{

		if (strcmp(left.obj, right.obj) != 0) {

			return true;
		}
		return false;

	}





	//stream extraction operator
	istream& operator>>(std::istream& in, MyString& source)
	{

		while (isspace(in.peek())) {
			in.ignore();
		}

		char temp[128];
		in.getline(temp, 127, ' ');
		delete[] source.obj;
		source.obj = new char[strlen(temp) + 1];
		strcpy(source.obj, temp);
		return in;

	}






	// concatenation addition of the left and right MyString
	// overloading the + function
	MyString operator+(const MyString& left, const MyString& right)
	{

		long strLength = strlen(left.obj);
		strLength += strlen(right.obj);
		MyString temp = new char[strLength + 1];
		strcpy(temp.obj, left.obj);
		strcat(temp.obj, right.obj);
		return temp;
	}






	// Void function with a read() function intaking two arguments;
	// inString stream and a character dimiliter.
	void MyString::read(std::istream& inString, char delimtr)
	{

		char temp[128];
		inString.getline(temp, 127, '\n');
		delete[] this->obj;
		this->obj = new char[strlen(temp) + 1];
		strcpy(this->obj, temp);
	}


	



	// concatenation addition of the left and right MyString
	// overloading the shorthand +=
	MyString MyString::operator+=(const MyString& right)
	{

		long strLength = strlen(this->obj) + strlen(right.obj) +1;
		MyString temp = new char[strLength];
		strcpy(temp.obj, this->obj);
		delete[] this->obj;
		this->obj = new char[strLength];
		strcpy(this->obj, temp.obj);
		strcat(this->obj, right.obj);
		return *this;
	}
}
