#ifndef DOTTEDLINES_H
#define DOTTEDLINES_H

#include "LineStyle.h"

class DottedLines : public LineStyle
{
public:
	DottedLines(Colour colour, shared_ptr<Display> display_ptr);
	virtual void plotLine(PointPair end_coords) override;
};

#endif