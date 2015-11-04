#include "painter_impl.hpp"
#include "turtle_impl.hpp"

namespace gmocktest {

    std::shared_ptr<Painter> Painter::create_with_turtle(const std::shared_ptr<Turtle> & turtle) {
        return std::make_shared<PainterImpl>(turtle);
    }
    
    PainterImpl::PainterImpl(const std::shared_ptr<Turtle> & turtle) {
        turtle_ = &turtle;
    }
    
    PainterImpl::PainterImpl() {
        
    }
    
    bool PainterImpl::draw_circle(int32_t x, int32_t y, int32_t radius) {
        turtle_->get()->pen_down();
        return true;
    }

} // namespace