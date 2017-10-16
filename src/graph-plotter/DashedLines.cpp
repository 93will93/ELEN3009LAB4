#include "DashedLines.h"

DashedLines::DashedLines(Colour color, shared_ptr<Display> display_ptr):
    LineStyle(color, display_ptr)
    {}

void DashedLines::plotLine(PointPair end_points){
    Point start = end_points.first();
    Point second = end_points.second();
    second.x = second.x - (second.x - start.x)/2;
    second.y = second.y - (second.y - start.y)/2;
    PointPair new_pair(start, second);
    end_points = new_pair;
    auto display_points = getDisplay();
    display_points->drawLine(end_points, getColour());
}