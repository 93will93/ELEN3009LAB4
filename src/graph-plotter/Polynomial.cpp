#include "Polynomial.h"

Polynomial::Polynomial(const vector<float> polynomialCoefficients):
	Function(),
	_polynomialCoefficients(polynomialCoefficients)
	{}

float Polynomial::evaluate(float x) const{
    auto sum = 0.f;
    for(unsigned int index = 0; index != _polynomialCoefficients.size(); index++){
        sum += _polynomialCoefficients.at(index) * pow(x, _polynomialCoefficients.size() - (index - 1));
    }
    return sum;
}