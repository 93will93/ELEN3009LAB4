#include "Graph.h"
#include "Sinusoid.h"
#include "Sampler.h"
#include "Display.h"
#include "SolidLineStyle.h"
#include "DottedLines.h"
#include "DashedLines.h"
#include "Points.h"
#include "Function.h"
#include "ExponentialPolynomial.h"
#include "Polynomial.h"
#include "Absolute.h"

#include <memory>

using std::shared_ptr;
using std::make_shared;

const float PI = 3.14159265359;

int main()
{
	// setup Graph with Display
	const int WIDTH = 800;
	const int HEIGHT = 600;
	shared_ptr<Display> display = make_shared<Display>(WIDTH, HEIGHT);
	Graph graph(display);

	// create sine and cosine functions
	float amplitude = 1.0;
	float frequency = 1.0;
	float phase = 0;
	Sinusoid sine_function{amplitude, frequency, phase};
    
	Sinusoid cosine_function{amplitude, frequency, phase + PI/2};
    vector<float> coeffs = {1.0, 2.0, 1.0};
    Polynomial poly_function{coeffs};
    
    vector<float> abs_coeffs = {1.0, -3.0, -4.0};
    auto poly_function_ptr = make_shared<Polynomial> (abs_coeffs);
    Absolute abs_poly_function (poly_function_ptr);
    
    ExponentialPolynomial expFunction{1.0, 1.5};

	// generate range and plot graphs
	Range range{0, 6*PI};
	SolidLineStyle solid_red{Colour::Red, display};
	graph.plot(generateDataPoints(sine_function, range), solid_red);

    DottedLines dot_red{Colour::Red, display};
    graph.plot(generateDataPoints(sine_function, range), dot_red);
    
	SolidLineStyle solid_blue{Colour::Blue, display};
	graph.plot(generateDataPoints(cosine_function, range), solid_blue);
   
    DashedLines dash_blue{Colour::Blue, display};
    graph.plot(generateDataPoints(cosine_function, range), dash_blue);
    
    Range range_new{-3, 1.5};
    graph.plot(generateDataPoints(poly_function, range_new), dot_red);
    graph.plot(generateDataPoints(expFunction, range_new), dot_red);
    
    Range range_abs{-4, 7};
    graph.plot(generateDataPoints(abs_poly_function, range_abs), dot_red);

    // More graphs i.e log graphs adding onto the excisting design
    // axis can be drawn using straight lines. This can be done ploting the polynomial with solid lines. 
    // The axis would be mmade up of two graphs and a third graph would be plotted to reporesent the curve 
    return 0;
}

