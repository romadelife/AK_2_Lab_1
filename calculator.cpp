#include "calculator.h"

int Calculator::Add (double a, double b)
{
    return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

void* Calculator::MulSub(double a ,double b)
{
   return Sub(Mul(a,b),a + b);
}