#pragma once

#include "painter.hpp"

class PainterImpl : public Painter {
    
public:
    
    PainterImpl(Turtle & turtle);
    
    bool DrawCircle(int x, int y, int radius);
    
private:
    
    Turtle *turtle_;
};