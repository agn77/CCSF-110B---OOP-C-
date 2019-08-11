//fraction.h class declaration 
#ifndef FRACTION_H
#define FRACTION_H

class fraction
{
    public:
        fraction();
        fraction(int num, int den);
        fraction addedTo(const fraction f2)const;
        fraction subtract(const fraction f2)const;
        fraction multipliedBy(const fraction f2)const;
        fraction dividedBy(const fraction f2)const;
        bool isEqualTo(const fraction f2)const;
        void print()const;

    private:
        void simplify();
        int numValue;
        int denValue;
};

#endif // FRACTION_H