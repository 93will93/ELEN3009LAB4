#include "ExponentialPolynomial.h"


ExponentialPolynomial::ExponentialPolynomial(float a, float b):
    Function(),
    _a(a),
    _b(b)
    {}

float ExponentialPolynomial::evaluate(float x) const{
    return _a * exp(x * _b);
}