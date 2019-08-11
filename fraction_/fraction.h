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






/*ANYTHING BELOW THIS LINE IS CODE OUTPUT

----- Testing basic fraction creation & printing
(fractions should be in reduced form, and as mixed numbers.)
fraction [0] = 1/2
fraction [1] = -5/7
fraction [2] = 10
fraction [3] = -4
fraction [4] = 0
fraction [5] = 4+2/3
fraction [6] = 0

----- Now reading fractions from file
Read fraction = 1/3
Read fraction = 1/2
Read fraction = 3/4
Read fraction = -4/5
Read fraction = 6
Read fraction = 5
Read fraction = -8
Read fraction = 1+2/5
Read fraction = -16+2/3
Read fraction = 1+1/4
Read fraction = 2
Read fraction = -4+1/4
Read fraction = -10+5/6

----- Testing relational operators between fractions
Comparing 1/2 to 1/2
        Is left < right? false
        Is left <= right? true
        Is left > right? false
        Is left >= right? true
        Does left == right? true
        Does left != right ? false
Comparing 1/2 to -1/2
        Is left < right? false
        Is left <= right? false
        Is left > right? true
        Is left >= right? true
        Does left == right? false
        Does left != right ? true
Comparing -1/2 to 1/10
        Is left < right? true
        Is left <= right? true
        Is left > right? false
        Is left >= right? false
        Does left == right? false
        Does left != right ? true
Comparing 1/10 to 0
        Is left < right? false
        Is left <= right? false
        Is left > right? true
        Is left >= right? true
        Does left == right? false
        Does left != right ? true
Comparing 0 to 0
        Is left < right? false
        Is left <= right? true
        Is left > right? false
        Is left >= right? true
        Does left == right? true
        Does left != right ? false

----- Testing relations between fractions and integers
Comparing -1/2 to 2
        Is left < right? true
        Is left <= right? true
        Is left > right? false
        Is left >= right? false
        Does left == right? false
        Does left != right ? true
Comparing -3 to 1/4
        Is left < right? true
        Is left <= right? true
        Is left > right? false
        Is left >= right? false
        Does left == right? false
        Does left != right ? true

----- Testing binary arithmetic between fractions
1/6 + 1/3 = 1/2
1/6 - 1/3 = -1/6
1/6 * 1/3 = 1/18
1/6 / 1/3 = 1/2
1/3 + -2/3 = -1/3
1/3 - -2/3 = 1
1/3 * -2/3 = -2/9
1/3 / -2/3 = -1/2
-2/3 + 5 = 4+1/3
-2/3 - 5 = -5+2/3
-2/3 * 5 = -3+1/3
-2/3 / 5 = -2/15
5 + -1+1/3 = 3+2/3
5 - -1+1/3 = 6+1/3
5 * -1+1/3 = -6+2/3
5 / -1+1/3 = -3+3/4

----- Testing arithmetic between fractions and integers
-1/2 + 4 = 3+1/2
-1/2 - 4 = -4+1/2
-1/2 * 4 = -2
-1/2 / 4 = -1/8
3 + -1/2 = 2+1/2
3 - -1/2 = 3+1/2
3 * -1/2 = -1+1/2
3 / -1/2 = -6

----- Testing shorthand arithmetic assignment on fractions
1/6 += 4 = 4+1/6
4+1/6 -= 4 = 1/6
1/6 *= 4 = 2/3
2/3 /= 4 = 1/6
4 += -1/2 = 3+1/2
3+1/2 -= -1/2 = 4
4 *= -1/2 = -2
-2 /= -1/2 = 4
-1/2 += 5 = 4+1/2
4+1/2 -= 5 = -1/2
-1/2 *= 5 = -2+1/2
-2+1/2 /= 5 = -1/2

----- Testing shorthand arithmetic assignment using integers
-1/3 += 3 = 2+2/3
2+2/3 -= 3 = -1/3
-1/3 *= 3 = -1/1
-1/1 /= 3 = -1/3

----- Testing increment/decrement prefix and postfix
Now g = -1/3
g++ = -1/3
Now g = 2/3
++g = 1+2/3
Now g = 1+2/3
g-- = 1+2/3
Now g = 2/3
--g = -1/3
Now g = -1/3


*/









