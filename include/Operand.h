#ifndef OPERAND_H
#define OPERAND_H


class Operand
{
    public:
        Operand();
        //double virtual calculate() = 0;
        virtual Operand& evaluate() = 0;
        virtual ~Operand();
    protected:
    private:
};

class real_Number : Operand{

    public:
        real_Number(){real = 0;}
        real_Number(double r){real = r;}
        real_Number(real_Number &r){this->real = r.real;}
        Operand& evaluate();// {return *this;}
        double operator+(const real_Number &a);

    protected:
        double real;
};

class add : Operand{

    public:

    Operand& evaluate();

    private:
    real_Number *left, *right;
};
#endif // OPERAND_H
