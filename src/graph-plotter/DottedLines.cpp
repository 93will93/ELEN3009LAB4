
#include "DottedLines.h"

DottedLines::DottedLines(Colour colour, shared_ptr<Display> display_ptr):
    LineStyle(colour, display_ptr)
    {}
    
void DottedLines::plotLine(PointPair end_poins){
    auto display_value = getDisplay();
    display_value->drawDot(end_poins.first(), getColour());
}