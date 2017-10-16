#ifndef DASHEDLINES_H
#define DASHEDLINES_H

#include "LineStyle.h"

class DashedLines : public LineStyle
{
public:
	DashedLines(Colour color, shared_ptr<Display> display_ptr);
	virtual void plotLine(PointPair end_points) override;
};

#endif