#include "painter_impl.hpp"

PainterImpl::PainterImpl(Turtle & turtle) {
    turtle_ = &turtle;
}

bool PainterImpl::DrawCircle(int x, int y, int radius) {
    
    turtle_->PenDown();
    return true;
}