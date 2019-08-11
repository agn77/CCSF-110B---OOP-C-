#ifndef FRACTION_H_INCLUDED
#define FRACTION_H_INCLUDED


#include <iostream>
using namespace std;






/*

    The fraction class used to construct a fraction object as reduced
    improper fractions and reduced to integer and reduced fraction object.

    fraction()
        postcondition: Fraction object is constructed with a numerator
            of zero and a denominator of 1.

    fraction(int whole)
        precondition: A whole number to construct a fraction object.
        postcondition: constructs a fraction object with a numerator
            of whole and a denominator of 1.

    fraction(int num, int den)
        precondition: Integers num and den to initialize a fraction object.
        postcondition: Constructs a fraction object with numerator, num,
                and denominator, den.

    friend fraction operator+(const fraction& left, const fraction& right)
        precondition: Constant fraction to the left and right of operator.
        postcondition: Returns the addition of the left and right fractions.

    friend fraction operator-(const fraction& left, const fraction& right)
        precondition: Constant fraction to the left and right of operator.
        postcondition: Returns the subtraction of the left and right fractions.

    friend fraction operator*(const fraction& left, const fraction& right)
        precondition: Constant fraction to the left and right of operator.
        postcondition: Returns the multiplication of the left and right fractions.

    friend fraction operator/(const fraction& left, const fraction& right)
        precondition: Constant fraction to the left and right of operator.
        postcondition: Returns the division of the left and right fractions.

    friend ostream& operator<<(ostream& out, const fraction &f)
        precondition: Fraction object f outputted through ostream
        postcondition: outputs simplified f.

    friend istream& operator>>(istream& in, fraction &f)
        precondition: Fraction f inputted through istream.
        postcondition: takes user input to set values of f.

    friend bool operator<(const fraction& left, const fraction& right)
        precondition: Constant fraction to the left and right of operator.
        postcondition: Returns true if the left fraction is less than the right.

    friend bool operator<=(const fraction& left, const fraction& right)
        precondition: Constant fraction to the left and right of operator.
        postcondition: Returns true if the left fraction is
                            less than or equal to the right.

    friend bool operator>=(const fraction& left, const fraction& right)
        precondition: Constant fraction to the left and right of operator.
        postcondition: Returns true if the left fraction is
                            greater than or equal to the right.

    friend bool operator>(const fraction& left, const fraction& right)
        precondition: Constant fraction to the left and right of operator.
        postcondition: Returns true if the left fraction is greater than the right.

    friend bool operator==(const fraction& left, const fraction& right)
        precondition: Constant fraction to the left and right of operator.
        postcondition: Returns true if the left fraction is equal to the right.

    friend bool operator!=(const fraction& left, const fraction& right)
        precondition: Constant fraction to the left and right of operator.
        postcondition: Returns true if the left fraction is not equal to the right.

    fraction operator+=(const fraction& right)
        precondition: A constant fraction on the right of the operator.
        postcondition: Returns the addition of the right fraction
                            and the calling fraction.

    fraction operator-=(const fraction& right)
        precondition: A constant fraction on the right of the operator.
        postcondition: Returns the subtraction of the right fraction and
                        the calling fraction

    fraction operator*=(const fraction& right)
        precondition: A constant fraction on the right of the operator.
        postcondition: Returns the multiplication of the right fraction and
                            the calling fraction.

    fraction operator/=(const fraction& right)
        precondition: A constant fraction on the right of the operator.
        postcondition: Returns the division of the right fraction
                            and the calling fraction.

    fraction operator++()
        postcondition: Increases the calling function by 1.

    fraction operator--()
        postcondition: Decreases the calling function by 1.

    fraction operator++(int)
        postcondition: Increases the calling function by 1.

    fraction operator--(int)
        postcondition: Decreases the calling function by 1.
*/






namespace cs_fraction
{
    class fraction
    {
        public:
            fraction();
            fraction(int whole);
            fraction(int num,int den);
            friend fraction operator+(const fraction& left,
                                      const fraction& right);
            friend fraction operator-(const fraction& left,
                                      const fraction& right);
            friend fraction operator*(const fraction& left,
                                      const fraction& right);
            friend fraction operator/(const fraction& left,
                                      const fraction& right);
            friend ostream& operator<<(ostream& out,
                                       const fraction &f);
            friend istream& operator>>(istream& in,
                                       fraction &f);
            friend bool operator<(const fraction& left,
                                  const fraction& right);
            friend bool operator<=(const fraction& left,
                                   const fraction& right);
            friend bool operator>=(const fraction& left,
                                   const fraction& right);
            friend bool operator>(const fraction& left,
                                  const fraction& right);
            friend bool operator==(const fraction& left,
                                   const fraction& right);
            friend bool operator!=(const fraction& left,
                                   const fraction& right);
            fraction operator+=(const fraction& right);
            fraction operator-=(const fraction& right);
            fraction operator*=(const fraction& right);
            fraction operator/=(const fraction& right);
            fraction operator++();
            fraction operator--();
            fraction operator++(int);
            fraction operator--(int);

        private:
            void simplify();
            int numerator;
            int denominator;
    };
}

#endif // FRACTION_H_INCLUDED








