#ifndef EXPONENTIALPOLYNOMIAL_H
 #define EXPONENTIALPOLYNOMIAL_H

#include "Function.h"
#include <cmath>

class ExponentialPolynomial : public Function{
public:
    ExponentialPolynomial(float a, float b);
    float evaluate(float x) const;
    
private:
    float _a;
    float _b;
};
 
 #endif 