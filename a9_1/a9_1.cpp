// Alberto Gonzalez Navarro
// CS 110B Assignment 9.1
// Professor Harden
// 3/20/17
//





class fraction{

    public:

        void set(int num, int den);
        fraction addedTo(fraction val);
        fraction subtract(fraction val);
        fraction multipliedBy(fraction val);
        fraction dividedBy(fraction val);
        bool isEqualTo(fraction val);
        void print();

    private:

        int numerator;
        int denominator;

};





#include <fraction.h>
#include <iostream>
using namespace std;






int main()
{
    fraction f1;
    fraction f2;
    fraction result;

    f1.set(9, 8);
    f2.set(2, 3);

    cout << "The product of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.multipliedBy(f2);
    result.print();
    cout << endl;

    cout << "The quotient of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.dividedBy(f2);
    result.print();
    cout << endl;

    cout << "The sum of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.addedTo(f2);
    result.print();
    cout << endl;

    cout << "The difference of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.subtract(f2);
    result.print();
    cout << endl;

    if (f1.isEqualTo(f2)){
        cout << "The two fractions are equal." << endl;
    } else {
        cout << "The two fractions are not equal." << endl;
    }
}





void set(int num, int den){

    numerator = num;
    denominator = den;
}





fraction::addedTo(fraction val){

    fraction f;
    f.numerator = (numerator*val.denominator + val.numerator*denominator);
    f.denominator = denominator * val.denominator;
    return f1;
}





fraction::subtract(fraction val){

    fraction f;
    f.numerator = (numerator*val.denominator - val.numerator*denominator);
    f.denominator = denominator*val.denominator;
    return f;
}





fraction::multipliedBy(faction val){

    fraction f;
    f.numerator = numerator * val.numerator;
    f.denominator = denominator * val.denominator;
    return f;
}






fraction::dividedBy(fraction val){

    fraction f;
    f.numerator = numerator * val.denominator;
    f.denominator = denominator * val.numerator;
    return f;


}





bool isEqualTo(fraction val){

    if(numerator ==  val.numerator && denominator == val.denominator){

        return true;

    }else
        return false;

}






void print()
{

    cout << numerator << "/" << denominator;
}






// ANYTHING BELOW THIS LINE IS CODE
//
//The product of 9/8 and 2/3 is 18/24
//The quotient of 9/8 and 2/3 is 27/16
//The sum of 9/8 and 2/3 is 43/24
//The difference of 9/8 and 2/3 is 11/24
//The two fractions are not equal.
