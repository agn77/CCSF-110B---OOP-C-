// Alberto Gonzalez Navarro
// CS 110B Assignment 12.1
// Professor Harden
// 4/17/18
//

#include "fraction.h"
#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;
namespace cs_fraction
{
    fraction::fraction()
    {
        numerator = 0;
        denominator = 1;
    }

    fraction::fraction(int whole)
    {
        numerator = whole;
        denominator = 1;
    }


    fraction::fraction(int num, int den)
    {
        assert(den != 0);
        numerator = num;
        denominator = den;
        this->simplify();
    }


    fraction operator+(const fraction& left, const fraction& right)
    {
        int modNum1;
        int modNum2;
        int modDen;

        modDen = left.denominator * right.denominator;
        modNum1 = left.numerator * right.denominator;
        modNum2 = right.numerator * left.denominator;

        fraction result = fraction(modNum1 + modNum2, modDen);
        result.simplify();
        return result;
    }


    fraction operator-(const fraction& left, const fraction& right)
    {
        int modNum1;
        int modNum2;
        int modDen;

        modDen = left.denominator * right.denominator;
        modNum1 = left.numerator * right.denominator;
        modNum2 = right.numerator * left.denominator;

        fraction result = fraction(modNum1 - modNum2, modDen);
        result.simplify();
        return result;
    }


    fraction operator*(const fraction& left, const fraction& right)
    {
        fraction result = fraction(left.numerator * right.numerator,
                                   left.denominator * right.denominator);
        result.simplify();
        return result;
    }


    fraction operator/(const fraction& left, const fraction& right)
    {
        fraction result = fraction(left.numerator * right.denominator,
                                   left.denominator * right.numerator);
        result.simplify();
        return result;
    }


    ostream& operator<<(ostream& out, const fraction &f)
    {
        if(abs(f.numerator) > f.denominator)
        {
            out << ((f.numerator - f.numerator % f.denominator) / f.denominator);

            if(f.numerator % f.denominator != 0)
            {
                out << "+" << abs(f.numerator % f.denominator) << "/" << f.denominator;
            }
        }
        else if(f.numerator == f.denominator)
        {
            out << f.numerator;
        }
        else if(f.numerator == 0)
        {
            out << 0;
        }
        else
        {
            out << f.numerator << "/" << f.denominator;
        }

        return out;
    }



    istream& operator>>(istream& in, fraction &f)
    {
        int temp;
        in >> temp;
        if (in.peek() == '+')
        {
            in.ignore();
            in >> f.numerator;
            in.ignore();
            in >> f.denominator;
            if(temp < 0)
            {
                temp *= -1;
                f.numerator += temp * f.denominator;
                f.numerator *= -1;
            }
            else
            {
                f.numerator += temp * f.denominator;
            }
        }
        else if (in.peek() == '/')
        {
            in.ignore();
            in >> f.denominator;
            f.numerator = temp;
        }
        else
        {
            f.numerator = temp;
            f.denominator = 1;
        }

        f.simplify();
        return in;
    }


    bool operator<(const fraction& left, const fraction& right)
    {
        if(left.numerator * right.denominator < right.numerator * left.denominator)
            return true;
        else
            return false;
    }


    bool operator<=(const fraction& left, const fraction& right)
    {
        if(left.numerator * right.denominator <= right.numerator * left.denominator)
            return true;
        else
            return false;
    }


    bool operator>(const fraction& left, const fraction& right)
    {
        if(left.numerator * right.denominator > right.numerator * left.denominator)
            return true;
        else
            return false;
    }


    bool operator>=(const fraction& left, const fraction& right)
    {
        if(left.numerator * right.denominator >= right.numerator * left.denominator)
            return true;
        else
            return false;
    }

    bool operator==(const fraction& left, const fraction& right)
    {
        if(left.numerator * right.denominator == right.numerator * left.denominator)
            return true;
        else
            return false;
    }


    bool operator!=(const fraction& left, const fraction& right)
    {
        if(left.numerator * right.denominator != right.numerator* left.denominator)
            return true;
        else
            return false;
    }


    fraction fraction::operator+=(const fraction& right)
    {
        *this = *this + right;

        return *this;
    }


    fraction fraction::operator-=(const fraction& right)
    {
        *this = *this - right;

        return *this;
    }


    fraction fraction::operator*=(const fraction& right)
    {
        *this = *this * right;

        return *this;
    }


    fraction fraction::operator/=(const fraction& right)
    {
        *this = *this / right;

        return *this;
    }


    fraction fraction::operator++()
    {
        numerator += denominator;
        return *this;
    }


    fraction fraction::operator++(int)
    {
        fraction temp(numerator, denominator);
        numerator += denominator;
        return temp;
    }


    fraction fraction::operator--()
    {
        numerator -= denominator;
        return *this;
    }


    fraction fraction::operator--(int)
    {
        fraction temp(numerator, denominator);
        numerator -= denominator;
        return temp;
    }

    //simplifies the calling fraction.
    void fraction::simplify()
    {
        for (int i = denominator; i > 1; i--)
        {

            if ((numerator % i == 0) && (denominator % i == 0)) {

                numerator = denominator / i;
                denominator = denominator / i;
            }
        }
        if(denominator < 0)
        {
            denominator *= -1;
            numerator *= -1;
        }
    }
}
