#ifndef OPERAND_H
#define OPERAND_H


class Operand
{
    public:
        Operand();
        double virtual calculate() = 0;
        virtual ~Operand();
    protected:
    private:
};

class real_Number : Operand{

    public:
        double calculate(){return real;}
        real_Number& operator+(const real_Number &a)const;
    protected:
        double real;
};

class add : Operand{

    public:

    double calculate();

    private:
    Operand *left, *right;
};
#endif // OPERAND_H
