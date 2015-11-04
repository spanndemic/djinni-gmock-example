#pragma once

#include "painter.hpp"
#include "mock_turtle.hpp"

namespace gmocktest {

class PainterImpl : public Painter {
    
public:
    
    PainterImpl();
    
    PainterImpl(const Turtle turtle);
    
    PainterImpl(const std::shared_ptr<Turtle> & turtle);
    
    static std::shared_ptr<Painter> create_with_turtle(const std::shared_ptr<Turtle> & turtle);
    
    bool draw_circle(int32_t x, int32_t y, int32_t radius);
    
private:
    
    const std::shared_ptr<Turtle> *turtle_;
    
};

} // namespace