#include "Operand.h"

Operand::Operand()
{
    //ctor
}

Operand::~Operand()
{
    //dtor
}

real_Number& real_Number::operator+(const real_Number &a)const{

    real_Number temp;
    temp.real = this->real + a.real;
    return temp;
}


double add::calculate(){

    return left->calculate()+right->calculate();
}
